#!/usr/bin/env python3

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from rclpy.qos import ReliabilityPolicy, QoSProfile

from ex_solution.action import ExerciseAction

class ExerciseActionClient(Node):

    def __init__(self):
        self.forward_laser = 5.0 
        self.right_laser = 5.0 
        
        
        super().__init__('exercise_action_client')
        self._action_client = ActionClient(self, ExerciseAction, 'my')
        
        while not self._action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().info('Service server not available, waiting again...')
            
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        # creating the subscriber object
        self.subscriber_ = self.create_subscription(
            LaserScan,
            '/scan',
            self.read_measurement,
            # is the most used to read LaserScan data and some sensor data.
            QoSProfile(
                depth=10, reliability=ReliabilityPolicy.BEST_EFFORT)
        )   
        self.timer_period = 0.2
        # declare variable to store all the laser messages
        self.laser_msg = LaserScan()
        # declare the variable to save the front laser scan reading
        self.cmd = Twist()
        # create timer
        self.timer = self.create_timer(self.timer_period, self.motion)
        
        self.jakas_akcja = True
        
        
        
    def send_request(self):
        goal_msg = ExerciseAction.Goal()
        goal_msg.goal_distance = 0.3
        
        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.motion)

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: ')

        

    def read_measurement(self, msg):
        self.laser_msg = msg
        self.forward_laser = self.laser_msg.ranges[359]
        self.get_logger().info(f'{msg}')
        self.right_laser = self.laser_msg.ranges[179]
        self.get_logger().info(
                f'Right laser measurement : {self.right_laser} m')


    def move_straight(self):
        self.cmd.linear.x = 0.3
        self.cmd.linear.y = 0.0
        self.cmd.linear.z = 0.0
        self.publisher_.publish(self.cmd)
        self.get_logger().info('Moving straight...')
        
    def stop_robot(self):
        self.cmd.linear.x = 0.0
        self.cmd.linear.y = 0.0
        self.cmd.linear.z = 0.0
        self.publisher_.publish(self.cmd)
        self.get_logger().info('Stopping robot...')
        
    def motion(self):
        if self.jakas_akcja is True:
            # check if the robot is far from the front wall
            if ((self.forward_laser < 0.1) | (self.forward_laser > 0.3)):
                self.move_straight()
                self.get_logger().info('test')
                # self.get_logger().info(
                # f'Front laser measurement : {self.forward_laser} m')
            # else:
            #     # self.stop_robot()
            self.get_logger().info(
                f'Front laser measurement : {self.forward_laser} m')
            self.get_logger().info(
                f'Right laser measurement : {self.right_laser} m')
        else:
            self.get_logger().info('Robot not ready...')




def main(args=None):
    rclpy.init(args=args)

    action_client = ExerciseActionClient()
    
    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
    
