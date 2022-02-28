/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "waterpump.h"
#include "engineutils.h"

WaterPump::WaterPump(PartStatus the_status, short the_engine_number) :
					Pump(the_status, the_engine_number){
    #if MESSAGE_TRACE 
 	 cout<<"WaterPump Object Created!"<<endl;
 	 #endif					
}
					
WaterPump::~WaterPump(){
   #if MESSAGE_TRACE 
 	cout<<"WaterPump Object Destroyed!"<<endl;
   #endif
}

char* WaterPump::getComponentType(){ return "Water Pump";}
