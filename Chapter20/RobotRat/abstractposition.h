/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef ABSTRACT_POSITION_H
#define ABSTRACT_POSITION_H

class AbstractPosition {
 public:
  AbstractPosition(){};
  virtual ~AbstractPosition(){}
  virtual void setRow(int row) = 0;
  virtual void setColumn(int column) = 0;
  virtual void setPosition(int row, int column) = 0;
  virtual int getRow() = 0;
  virtual int getColumn() = 0;
  virtual void move(int spaces) = 0;
  virtual void turnLeft() = 0;
  virtual void turnRight() = 0;
  virtual void setBoundaries(int rows, int columns) = 0;
  virtual int getUpperRowBoundary() = 0;
  virtual int getUpperColumnBoundary() = 0;
};
#endif
