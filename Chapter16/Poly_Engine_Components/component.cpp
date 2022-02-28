/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "component.h"
#include "engineutils.h"

int Component::component_count = 0;

Component::Component(PartStatus the_status, short the_engine_number):its_status(the_status),
					 registered_engine_number(the_engine_number) {
   component_count++;
    #if MESSAGE_TRACE 
 	 cout<<"Component Object Created!"<<endl;
 	 #endif
}
					 


Component::~Component(){
      component_count--;
       #if MESSAGE_TRACE 
 	    cout<<"Component Object Destroyed!"<<endl;
 	    #endif
      }


void Component::setStatus(PartStatus the_status){
	its_status = the_status;
}

PartStatus Component::getStatus(){ return its_status;}

void Component::registerWithEngineNumber(short the_engine_number){
	registered_engine_number = the_engine_number;
}

short Component::getRegisteredEngineNumber(){ return registered_engine_number;}

int Component::getComponentCount(){ return component_count;}

bool Component::isWorkingProperly(){
   bool return_val = false;
   switch(its_status){
     case WORKING :   return_val = true;
     				  break;
     case NOTWORKING: break;
     default: break;
   
   }
  return return_val;
}

void Component::enable(){ its_status = WORKING;}

void Component::disable(){ its_status = NOTWORKING;}

