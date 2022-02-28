/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef WATER_PUMP_H
#define WATER_PUMP_H
#include "pump.h"
#include "engineutils.h"

class WaterPump : public Pump {
   public:
   	  WaterPump(PartStatus the_status = WORKING, short the_engine_number = 0);
   	  virtual ~WaterPump();
   	  virtual char* getComponentType();
};
#endif
