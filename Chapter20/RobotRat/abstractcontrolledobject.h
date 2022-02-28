/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef ABSTRACT_CONTROLLED_OBJECT_H
#define ABSTRACT_CONTROLLED_OBJECT_H

class AbstractControlledObject {
   public:
     AbstractControlledObject(){};
     virtual ~AbstractControlledObject(){};
     virtual void move(int spaces) = 0;
     virtual void turnLeft() = 0;
     virtual void turnRight() = 0;
     virtual void setRow(int row) = 0;
     virtual void setColumn(int column) = 0;
     virtual void setPosition(int row, int column) = 0;
     virtual int getRow() = 0;
     virtual int getColumn() = 0;
     virtual void setBoundaries(int rows, int columns) = 0;
     virtual int getUpperRowBoundary() = 0;
     virtual int getUpperColumnBoundary() = 0;
     virtual void setMarkerUp() = 0;
     virtual void setMarkerDown() = 0;
     virtual void toggleMarker() = 0;
     virtual bool isMarkerDown() = 0;
     virtual char* getObjectType() = 0;
     

};
#endif
