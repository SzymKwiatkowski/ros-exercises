#!/usr/bin/env python3

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor
from rclpy.qos import ReliabilityPolicy, QoSProfile

from ex_solution.action import ExerciseAction

class ExerciseActionClient(Node):

    def __init__(self):
        super().__init__('exercise_action_client')
        self._action_client = ActionClient(self, ExerciseAction, 'my')
        while not self._action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info('Service server not available, waiting again...')
        # create Empty request
        self.req = ExerciseActionClient.send_request(self, 2.0)
        # creating the publisher object
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        # creating the subscriber object
        self.subscriber_ = self.create_subscription(
            LaserScan,
            '/laser_scan',
            self.read_measurement,
            # is the most used to read LaserScan data and some sensor data.
            QoSProfile(
                depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)
        )
        # define the timer period for 0.2 seconds
        self.timer_period = 0.2
        # declare variable to store all the laser messages
        self.laser_msg = LaserScan()
        # declare the variable to save the front laser scan reading
        # self.forward_laser = 0.0
        # declare the velocity twist message
        self.cmd = Twist()
        # create timer
        self.timer = self.create_timer(self.timer_period, self.motion)
        # declare Boolean to store the response of the service server
        self.start_wall_following = True

    def send_request(self, order):
        goal_msg = ExerciseAction.Goal()
        goal_msg.goal_distance = 0.3

        self._action_client.wait_for_server()

        # self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        # self._send_goal_future.add_done_callback(self.motion)

    def feedback_callback(self, feedback_msg):
        # feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: ')
    

    def motion(self):
        if self.start_wall_following is True:
            # check if the robot is far from the front wall
            if ((self.forward_laser > 0.5) | (self.forward_laser < 0.1)):
                self.move_straight()
            # else:
            #     self.stop_robot()

            self.get_logger().info(
                f'Front laser measurement : {self.forward_laser} m')
        else:
            self.get_logger().info('Robot not ready for wall following...')

    def read_measurement(self, msg):
        self.laser_msg = msg
        self.forward_laser = self.laser_msg.ranges[359]
        # ExerciseAction.

    def move_straight(self):
        self.cmd.linear.x = 0.5
        self.cmd.angular.z = 0.0
        self.publisher_.publish(self.cmd)
        self.get_logger().info('Moving straight...')

    def stop_robot(self):
        self.get_logger().info('Stopping robot...')
        self.cmd.linear.x = 0.0
        self.cmd.angular.z = 0.0
        self.publisher_.publish(self.cmd)    



def main(args=None):
    rclpy.init(args=args)

    action_client = ExerciseActionClient()

    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(action_client)
    # shutdown the ROS communication
    rclpy.shutdown()


if __name__ == '__main__':
    main()