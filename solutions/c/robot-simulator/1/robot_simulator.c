#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y){
	robot_status_t new_robot;
	if (direction) new_robot.direction = direction;
	if (!direction)  new_robot.direction = DIRECTION_DEFAULT;
	new_robot.position.x = x;
	new_robot.position.y = y;
	return new_robot;
}

void robot_move(robot_status_t *robot, const char *commands){
	size_t command_len = strlen(commands);
	for (size_t i = 0; i < command_len; i++){
		if (commands[i] == 'L') {
			if (robot->direction == DIRECTION_NORTH) robot->direction = DIRECTION_WEST;
			else robot->direction --;
		} 
		if (commands[i] == 'R') robot->direction ++;
		if (robot->direction == DIRECTION_MAX) robot->direction = DIRECTION_NORTH;
		if (commands[i] == 'A') {
			if (robot->direction == DIRECTION_NORTH) robot->position.y ++;
			if (robot->direction == DIRECTION_EAST) robot->position.x ++;
			if (robot->direction == DIRECTION_SOUTH) robot->position.y --;
			if (robot->direction == DIRECTION_WEST) robot->position.x --;
		}
	}
}
