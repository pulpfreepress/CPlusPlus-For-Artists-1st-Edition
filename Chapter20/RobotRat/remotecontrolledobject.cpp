/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "remotecontrolledobject.h"
#include "position.h"
#include "marker.h"

int RemoteControlledObject::count = 0;


RemoteControlledObject::RemoteControlledObject(){
  its_position = new Position;
  its_marker = new Marker;
  count++;
}


RemoteControlledObject::~RemoteControlledObject(){
	count--;
	delete its_position;
	delete its_marker;
}

void RemoteControlledObject::move(int spaces){
	its_position->move(spaces);
}

void RemoteControlledObject::turnLeft(){
	its_position->turnLeft();
}

void RemoteControlledObject::turnRight(){
	its_position->turnRight();
}


void RemoteControlledObject::setRow(int row){
  its_position->setRow(row);
}

void RemoteControlledObject::setColumn(int column){
   its_position->setColumn(column);
}

void RemoteControlledObject::setPosition(int row, int column){
   its_position->setPosition(row, column);
}

int RemoteControlledObject::getRow(){
  return its_position->getRow();
}

int RemoteControlledObject::getColumn(){
  return its_position->getColumn();
}


void RemoteControlledObject::setBoundaries(int rows, int columns){
    its_position->setBoundaries(rows, columns);

}

int RemoteControlledObject::getUpperRowBoundary(){
   return its_position->getUpperRowBoundary();
 }
 
 int RemoteControlledObject::getUpperColumnBoundary(){
    return its_position->getUpperColumnBoundary();
 }

 void RemoteControlledObject::setMarkerUp(){
    its_marker->setMarkerUp();
 }
 
 void RemoteControlledObject::setMarkerDown(){
    its_marker->setMarkerDown();
  }

 void RemoteControlledObject::toggleMarker(){
    its_marker->toggleMarker();
 }
 
 bool RemoteControlledObject::isMarkerDown(){
 	return its_marker->isMarkerDown();
 }
