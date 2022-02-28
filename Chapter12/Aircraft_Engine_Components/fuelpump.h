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
#include "aircraftutils.h"

class FuelPump {
	public:
		FuelPump(PartStatus _status = Working, short engine_number = 0);
		~FuelPump();
		PartStatus isWorkingProperly();
		void setStatus(PartStatus _status);
		void registerWithEngineNumber(short _engine_number);
		short getRegisteredEngineNumber();
	private:
		PartStatus status;
		short registered_engine_number;
};

#endif
