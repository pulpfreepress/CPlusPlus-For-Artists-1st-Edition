/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef FUEL_PUMP_H
#define FUEL_PUMP_H
#include "pump.h"
#include "engineutils.h"

class FuelPump : public Pump{
	public:
		FuelPump(PartStatus the_status = WORKING, short the_engine_number = 0);
		virtual ~FuelPump();
		virtual char* getComponentType();

};
#endif
