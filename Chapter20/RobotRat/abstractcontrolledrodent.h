/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef ABSTRACT_CONTROLLED_RODENT_H
#define ABSTRACT_CONTROLLED_RODENT_H
#include "remotecontrolledobject.h"

class AbstractControlledRodent : public RemoteControlledObject {
   public:
     AbstractControlledRodent(){}
     virtual ~AbstractControlledRodent(){}
     virtual void setTailUp() = 0;
     virtual void setTailDown() = 0;

};
#endif
