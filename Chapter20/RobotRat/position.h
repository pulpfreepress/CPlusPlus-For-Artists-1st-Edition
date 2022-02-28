/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef POSITION_H
#define POSITION_H
#include "abstractposition.h"

class Position : public AbstractPosition {

  public:
    Position(int row = 0, int column = 0);
    ~Position();
    void setRow(int row);
    void setColumn(int column);
    void setPosition(int row, int column);
    int getRow();
    int getColumn();
    void move(int spaces);
    void turnLeft();
    void turnRight();
    void setBoundaries(int rows, int columns);
    int getUpperRowBoundary();
    int getUpperColumnBoundary();
    
   private:
    int its_row;
    int its_column;
    int upper_row_boundary;
    int upper_column_boundary;
    int lower_row_boundary;
    int lower_column_boundary;
    enum Direction {NORTH, SOUTH, EAST, WEST};
    Direction its_direction;
    void incrementRow(int val);
    void incrementColumn(int val);
    void setLowerRowBoundary(int lower);
    void setUpperRowBoundary(int upper);
    void setLowerColumnBoundary(int lower);
    void setUpperColumnBoundary(int upper);
};
#endif
