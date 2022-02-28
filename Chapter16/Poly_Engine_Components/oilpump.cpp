/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "oilpump.h"
#include "engineutils.h"

OilPump::OilPump(PartStatus the_status, short the_engine_number) :
					Pump(the_status, the_engine_number){
	 #if MESSAGE_TRACE 
 	  cout<<"OilPump Object Created!"<<endl;
 	 #endif
	}
					
OilPump::~OilPump(){
   #if MESSAGE_TRACE 
 	cout<<"OilPump Object Destroyed!"<<endl;
  #endif
}

char* OilPump::getComponentType(){ return "Oil Pump";}
