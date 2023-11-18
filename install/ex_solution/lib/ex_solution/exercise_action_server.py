#!/usr/bin/env python3
import time
import sys
import numpy as np

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from rclpy.qos import ReliabilityPolicy, QoSProfile
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup



from ex_solution.action import ExerciseAction

class ExerciseActionServer(Node):

    def __init__(self):
        super().__init__('exercise_action_server')
        self.srv_cbg = MutuallyExclusiveCallbackGroup()
        self.sub_cbg = MutuallyExclusiveCallbackGroup()
        
        self._action_server = ActionServer(
            self,
            ExerciseAction,
            'my',
            self.execute_callback)
        
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)

        self.subscriber_ = self.create_subscription(
            LaserScan,
            '/laserscan',
            self.read_measurement,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT),
            callback_group=self.sub_cbg)    
        
        self.timer = 0.5
        self.cmd = Twist()
        self.curr_meas = []
        self.front_laser_meas = 0.0
        # front laser acceptable range with Â± 5 degree of error (the angle increment of the laser is equivalent to 0.5 deg)
        self.acceptable_front_range = range(349, 369)

        self.get_logger().info('Action Server is running...')   
        
        # time.sleep(1)
        
        # self.move_straight()
        # while True:
        #     self.get_logger().info(
        #         f'Current front laser measurment: {self.front_laser_meas}m')
        #     if self.front_laser_meas < 0.2:
        #         self.get_logger().info('Distance to closest wall < 20cm')
        #         self.stop_robot()
        #         break
        
    def stop_robot(self):
        self.get_logger().info('Stopping robot...')
        self.cmd.linear.x = 0.0
        self.cmd.angular.z = 0.0
        self.publisher_.publish(self.cmd)
        
    def move_straight(self):
        self.get_logger().info('Moving straight...')
        self.cmd.linear.x = 0.5
        self.cmd.angular.z = 0.0
        self.publisher_.publish(self.cmd)
        
    def read_measurement(self, msg):
        self.curr_meas = msg.ranges
        self.front_laser_meas = msg.ranges[359]

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
            
        self.goal_reached = False
        
        start = time.time()

        result = ExerciseAction.Result()
        result.total_time = time.time() - start
        return result       
    
def main(args=None):
    rclpy.init(args=args)
    

    exercise_action_server = ExerciseActionServer()

    rclpy.spin(exercise_action_server)
    

if __name__ == '__main__':
    main()