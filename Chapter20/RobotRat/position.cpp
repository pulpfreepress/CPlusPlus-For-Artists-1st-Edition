#include "position.h"
/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <assert.h>


Position::Position(int row, int column):its_row(row), its_column(column),
				   lower_row_boundary(0), upper_row_boundary(20),
				   lower_column_boundary(0), upper_column_boundary(20),
				   its_direction(EAST){}
				   
				   
Position::~Position(){}

void Position::setRow(int row){
    its_row = row;
 }
  
  
void Position::setColumn(int column){
    its_column = column;
}


void Position::incrementRow(int val){
     
     int new_row = its_row + val;
    //assert((lower_row_boundary <= new_row) && (new_row < upper_row_boundary));
    if(new_row < lower_row_boundary){
        its_row = lower_row_boundary;
    }else if(new_row > (upper_row_boundary-1)){
            its_row = (upper_row_boundary-1);
    }else its_row = new_row;
  }


void Position::incrementColumn(int val){
    
    int new_column = its_column + val;
    //assert((lower_column_boundary <= new_column) && (new_column < upper_column_boundary));
     if(new_column < lower_column_boundary){
        its_column = lower_row_boundary;
    }else if(new_column > (upper_column_boundary-1)){
            its_column = (upper_column_boundary-1);
    }else its_column = new_column;
  
  }


int Position::getRow(){
  return its_row;
}


int Position::getColumn(){
   return its_column;
  }


void Position::setLowerRowBoundary(int lower){
   lower_row_boundary = lower;
}


void Position::setUpperRowBoundary(int upper){
   upper_row_boundary = upper;
}


void Position::setLowerColumnBoundary(int lower){
   lower_column_boundary = lower;
}


void Position::setUpperColumnBoundary(int upper){
    upper_column_boundary = upper;
}

void Position::move(int spaces){
    switch(its_direction){
      case NORTH: incrementRow(spaces * -1);
      			  break;
      case EAST: incrementColumn(spaces);
      			  break;
      case SOUTH: incrementRow(spaces);
      			  break;
      case WEST:  incrementColumn(spaces * -1);
      			  break;
      default: break;
    }
}


void Position::turnLeft(){
  switch(its_direction){
    case NORTH: its_direction = WEST;
                break;
    case EAST:  its_direction = NORTH;
    			break;
    case SOUTH: its_direction = EAST;
    			break;
    case WEST: its_direction = SOUTH;
    			break;
    default:   its_direction = EAST;
 }
}



void Position::turnRight(){
  switch(its_direction){
    case NORTH: its_direction = EAST;
                break;
    case EAST:  its_direction = SOUTH;
    			break;
    case SOUTH: its_direction = WEST;
    			break;
    case WEST: its_direction = NORTH;
    			break;
    default:   its_direction = EAST;
  
  }

}

void Position::setBoundaries(int rows, int columns){
   upper_row_boundary = rows, upper_column_boundary = columns;

}

void Position::setPosition(int row, int column){
    its_row = row, its_column = column;
}

int Position::getUpperRowBoundary(){
  return upper_row_boundary;
}

int Position::getUpperColumnBoundary(){
  return upper_column_boundary;
 }
