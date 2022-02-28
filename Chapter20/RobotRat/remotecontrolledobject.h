/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef REMOTE_CONTROLLED_OBJECT_H
#define REMOTE_CONTROLLED_OBJECT_H
#include "AbstractPosition.h"
#include "AbstractMarker.h"
#include "AbstractControlledObject.h"

class RemoteControlledObject : public AbstractControlledObject {
   public:
     RemoteControlledObject();
     virtual ~RemoteControlledObject();
     void move(int spaces);
     void turnLeft();
     void turnRight();
     void setBoundaries(int rows, int columns);
     void setRow(int row);
     void setColumn(int column);
     void setPosition(int row, int column);
     int getRow();
     int getColumn();
     int getUpperRowBoundary();
     int getUpperColumnBoundary();
     void setMarkerUp();
     void setMarkerDown();
     void toggleMarker();
     bool isMarkerDown();
  
     
   private:
     static int count;
     AbstractPosition* its_position;
     AbstractMarker*  its_marker;

};
#endif
