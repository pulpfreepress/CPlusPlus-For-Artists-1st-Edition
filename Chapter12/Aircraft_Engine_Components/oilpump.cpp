/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "aircraftutils.h"
#include "oilpump.h"
#include <iostream>
using namespace std;

OilPump::OilPump(PartStatus _status, short engine_number):status(_status), registered_engine_number(engine_number){
   switch(status){
   	case NotWorking: cout<<"Oil pump "<<registered_engine_number<<" malfunction"<<endl;
   					 break;
   	case Working   : cout<<"Oil pump "<<registered_engine_number<<" working"<<endl;
   					 break;
   	default        : ;
  }  
}

OilPump::~OilPump(){
	cout<<"Oil pump "<<registered_engine_number<<" destroyed"<<endl;
}

PartStatus OilPump::isWorkingProperly(){ return status;}

void OilPump::setStatus(PartStatus _status){ status = _status;}

void OilPump::registerWithEngineNumber(short _engine_number){
	registered_engine_number = _engine_number;
}

short OilPump::getRegisteredEngineNumber(){return registered_engine_number;}
