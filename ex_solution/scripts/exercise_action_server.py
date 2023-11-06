#!/usr/bin/env python3
import time
import sys
import numpy as np

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

from ex_solution.action import ExerciseAction

class ExerciseActionServer(Node):

    def __init__(self):
        super().__init__('exercise_action_server')
        self._action_server = ActionServer(
            self,
            ExerciseAction,
            'my',
            self.execute_callback)
        
        self.get_logger().info('Action Server is running...')

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
