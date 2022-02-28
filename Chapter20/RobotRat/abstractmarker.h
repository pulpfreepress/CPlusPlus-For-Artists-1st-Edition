/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef ABSTRACT_MARKER_H
#define ABSTRACT_MARKER_H

class AbstractMarker {
  public:
    AbstractMarker(){}
    virtual ~AbstractMarker(){}
    virtual void setMarkerUp() = 0;
  	virtual void setMarkerDown() = 0;
  	virtual void toggleMarker() = 0;
  	virtual bool isMarkerDown() = 0;

};
#endif
