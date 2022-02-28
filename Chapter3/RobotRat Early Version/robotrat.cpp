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
	File: 			robotrat.cpp
	Student Name:
	Project:
	Class:
	
	...and any additional header info 

**********************************************/


#include "robotrat.h"
#include <iostream.h>
#include <stdlib.h>





/********************************************
     File Scope Variable Declarations
********************************************/
namespace robotrat{
static bool floor[ROWS][COLS] = {};
static PenPosition pen_position = UP;
static Direction rats_direction = EAST;
static int current_row = 0;
static int current_col = 0;

}

void setTestPattern();

void setTestPattern(){

  robotrat::floor[0][0] = true;
  robotrat::floor[0][1] = true;
  robotrat::floor[0][2] = true;
  robotrat::floor[0][3] = true;
  robotrat::floor[1][3] = true;
  robotrat::floor[2][3] = true;
  robotrat::floor[3][3] = true;
  robotrat::floor[4][3] = true;
  robotrat::floor[5][3] = true;


}



/********************************************
       Function Definitions
*********************************************/

void displayMenu(){

	cout<<"        	1. Pen Up"<<endl;
	cout<<"			2. Pen Down"<<endl;
	cout<<"			3. Turn Right"<<endl;
	cout<<"			4. Turn Left"<<endl;
	cout<<"			5. Move"<<endl;
	cout<<"			6. Print Floor"<<endl;
	cout<<"			7. Exit"<<endl;

}


void setPenUp(){
	
		cout<<"The pen is up!"<<endl;
}



void setPenDown(){

		cout<<"The pen is down!"<<endl;
}


void turnRight(){

	cout<<"Robot Rat turned right!"<<endl; 
}


void turnLeft(){

	cout<<"Robot Rat turned left!"<<endl;
}


void move(){

	cout<<"Robot Rat moved!"<<endl;
		
}



void printFloor(){

 setTestPattern();
 
for(int i=0; i<ROWS; i++){
	for(int j=0; j<COLS; j++){
	  if(robotrat::floor[i][j])
		 cout<<"[-]";
		 else cout<<"[ ]";
	  }
	 cout<<endl;
	}
				
}


void programExit(){

		exit(0);
}



void doDefault(){
		
		cout<<"Please Enter A Valid Menu Choice: "<<endl;
}


void processMenuChoice(){

   char input = '0';
   
   cout<<"Please Enter Menu Choice: ";
   
   cin>>input;
   
   switch(input){
   	
   	 case '1': setPenUp();
   	 		   break;
   	 		   
   	 case '2': setPenDown();
   	 		   break;
   	 		   
   	 case '3': turnRight();
   	 		   break;
   	 		   
   	 case '4': turnLeft();
   	 		   break;
   	 		 
   	 case '5': move();
   			   break;
   			 
   	 case '6': printFloor();
   	 		   break;
   	 		   
   	 case '7': programExit();
   	 
   	 default : doDefault();
   }

}

