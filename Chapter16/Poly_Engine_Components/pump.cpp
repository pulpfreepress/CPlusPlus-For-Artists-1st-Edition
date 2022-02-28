/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "pump.h"
#include "engineutils.h"

int Pump::pump_count = 0;

Pump::Pump(PartStatus the_status, short the_engine_number): Component(the_status, the_engine_number),
           its_status(STOPPED){
           
    pump_count++;
    
     #if MESSAGE_TRACE 
 	  cout<<"Pump Object Created!"<<endl;
 	 #endif
 }
 
 Pump::~Pump(){
       pump_count--;
        #if MESSAGE_TRACE 
 	     cout<<"Pump Object Destroyed!"<<endl;
 	     #endif
       }
 
 
 bool Pump::start(){
 	bool return_val = false;
 	PartStatus component_status = getStatus();
 	switch(component_status){
 	  case WORKING : its_status = RUNNING;
 	  				 return_val = true;
 	  				 break;
 	  case NOTWORKING : its_status = STOPPED; 
 	  				   break;
 	  default       : break;
 	}
    return return_val;
}

bool Pump::stop(){
   bool return_val = false;
   switch(its_status){
     case RUNNING : its_status = STOPPED;
     				return_val = true;
     				break;
     default       : break;
   }
   return return_val;
}


 
 int Pump::getPumpCount(){ return pump_count;}
