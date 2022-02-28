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
#include "fuelpump.h"
#include <iostream>
using namespace std;

FuelPump::FuelPump(PartStatus _status, short engine_number):status(_status), registered_engine_number(engine_number){
   switch(status){
   	case NotWorking: cout<<"Fuel pump "<<registered_engine_number<<" malfunction"<<endl;
   					 break;
   	case Working   : cout<<"Fuel pump "<<registered_engine_number<<" working"<<endl;
   					 break;
   	
   	default        : ;
  }  
}

FuelPump::~FuelPump(){
	cout<<"Fuel pump "<<registered_engine_number<<" destroyed"<<endl;
}

PartStatus FuelPump::isWorkingProperly(){ return status;}

void FuelPump::setStatus(PartStatus _status){ status = _status;}

void FuelPump::registerWithEngineNumber(short _engine_number){
	registered_engine_number = _engine_number;
}

short FuelPump::getRegisteredEngineNumber(){return registered_engine_number;}
