/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef PUMP_H
#define PUMP_H
#include "component.h"
#include "engineutils.h"

class Pump : public Component{
   public:
     	Pump(PartStatus the_status = WORKING, short the_engine_number = 0);
     	virtual ~Pump();
     	virtual bool start();
     	virtual bool stop();
     	virtual int getPumpCount();
         
   private:
   	static int pump_count;
   	enum PumpStatus {STOPPED, RUNNING};
    PumpStatus its_status;
};
#endif
