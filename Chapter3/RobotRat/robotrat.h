/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/*********************************************
	File: 			robotrat.h
	Student Name:
	Project:
	Class:
	
	...and any additional header info 

**********************************************/
#ifndef ROBOT_RAT_H
#define ROBOT_RAT_H



const int ROWS = 20;
const int COLS = 20;

enum Direction {NORTH, SOUTH, EAST, WEST};
enum PenPosition {UP, DOWN};

void displayMenu();
void processMenuChoice();
void setPenUp();
void setPenDown();
void turnRight();
void turnLeft();
void move();
void printFloor();
void programExit();
void doDefault();

#endif
