/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef MARKER_H
#define MARKER_H
#include "abstractmarker.h"

class Marker : public AbstractMarker {
  public:
  	Marker();
  	virtual ~Marker();
  	void setMarkerUp();
  	void setMarkerDown();
  	void toggleMarker();
  	bool isMarkerDown();
  	
  private:
  	enum MarkerPosition {UP, DOWN};
  	MarkerPosition its_marker_position;
};
#endif
