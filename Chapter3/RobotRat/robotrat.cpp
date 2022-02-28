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
	
		robotrat::pen_position = UP;
}



void setPenDown(){

		robotrat::pen_position = DOWN;
}


void turnRight(){

	switch(robotrat::rats_direction){
	 
	  case NORTH: robotrat::rats_direction = EAST;
	  			  break;
	  case EAST:  robotrat::rats_direction = SOUTH;
	  			  break;
	  case SOUTH: robotrat::rats_direction = WEST;
	  			  break;
	  case WEST:  robotrat::rats_direction = NORTH;
	  			  break;
	  default:    robotrat::rats_direction = EAST;
	
	}			
}


void turnLeft(){

	switch(robotrat::rats_direction){
	 
	  case NORTH: robotrat::rats_direction = WEST;
	  			 
	  			  break;
	  case EAST:  robotrat::rats_direction = NORTH;
	  			 
	  			  break;
	  case SOUTH: robotrat::rats_direction = EAST;
	            
	  			  break;
	  case WEST:  robotrat::rats_direction = SOUTH;
	  			
	  			  break;
	  default:    robotrat::rats_direction = EAST;
	    		 
	
	}	
}


void move(){

	int spaces = 0;
	
	cout<<"How many spaces?: ";
	cin>>spaces;
	
	

   switch(robotrat::pen_position){
   
     case UP:  switch(robotrat::rats_direction){
                
                case NORTH: if(robotrat::current_row - spaces)
                				robotrat::current_row -= spaces;
                				else robotrat::current_row = 0;
                				break;
                
                case SOUTH: if((robotrat::current_row + spaces) < ROWS)
                				robotrat::current_row += spaces;
                				else robotrat::current_row = (ROWS-1);
                				break;
                
                case EAST:  if((robotrat::current_col + spaces) < COLS)
                				robotrat::current_col += spaces;
                				else robotrat::current_col = (COLS-1);
                				break;
                
                case WEST:  if(robotrat::current_col - spaces)
                				robotrat::current_col -= spaces;
                				else robotrat::current_col = 0;
                				break;
                
                default: ;
     
 
     		   }
     		
     		   break;
     
     case DOWN: switch(robotrat::rats_direction){
                
                case NORTH:  if((robotrat::current_row - spaces)<=0)
                				  spaces = robotrat::current_row;
                				
                			 while(spaces){
                				 robotrat::floor[robotrat::current_row--][robotrat::current_col] = true;
                				 --spaces;
                			 }
                			
                			 break;
                
                case SOUTH:   if( (robotrat::current_row + spaces) > ROWS)
                				  spaces = ((ROWS-1) - robotrat::current_row);
                				
                			   while(spaces){
                				   robotrat::floor[robotrat::current_row++][robotrat::current_col] = true;
                				    --spaces;
                			   }
                				
                				break;
                
                case EAST:    if((robotrat::current_col + spaces) >= COLS)
                				  spaces = ((COLS-1) - robotrat::current_col);
                				
                			   while(spaces){
                				   robotrat::floor[robotrat::current_row][robotrat::current_col++] = true;
                				   --spaces;
                			   }
                			
                				break;
                
                case WEST:   if(robotrat::current_col - spaces<=0)
                				 spaces = robotrat::current_col;
                				
                		     while(spaces){
                				 robotrat::floor[robotrat::current_row][robotrat::current_col--] = true;
                				 --spaces;
                			}
                				
                			break;
                
                default: ;
     
     
     		
     
     		   }
          
                break;
     
     
     default: ;
   	
  }	
		
}



void printFloor(){

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

