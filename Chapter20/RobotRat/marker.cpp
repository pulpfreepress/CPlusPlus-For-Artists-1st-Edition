/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "marker.h"

Marker::Marker():its_marker_position(UP){}

Marker::~Marker(){}

void Marker::setMarkerUp(){
	its_marker_position = UP;
}

void Marker::setMarkerDown(){
     its_marker_position = DOWN;
}


void Marker::toggleMarker(){
  switch(its_marker_position){
    case UP: its_marker_position = DOWN;
    		 break;
    case DOWN: its_marker_position = UP;
               break;
    default: its_marker_position = UP;
  }

}

bool Marker::isMarkerDown(){
  return (bool)its_marker_position;
}
