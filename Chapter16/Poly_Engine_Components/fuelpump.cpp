/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "fuelpump.h"
#include "engineutils.h"


FuelPump::FuelPump(PartStatus the_status, short the_engine_number) :
                   Pump(the_status, the_engine_number){
   #if MESSAGE_TRACE 
 	cout<<"FuelPump Object Created!"<<endl;
   #endif               
 }
                   
FuelPump::~FuelPump(){
   #if MESSAGE_TRACE 
 	 cout<<"FuelPump Object Destroyed!"<<endl;
    #endif
}


char* FuelPump::getComponentType(){ return "Fuel Pump";}

