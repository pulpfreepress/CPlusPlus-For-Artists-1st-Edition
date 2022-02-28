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
#include "compressor.h"
#include <iostream>
using namespace std;

Compressor::Compressor(PartStatus _status, short engine_number)
		   :status(_status), registered_engine_number(engine_number){
   switch(status){
   	case NotWorking: cout<<"Compressor "<<registered_engine_number
   						 <<" malfunction"<<endl;
   					 break;
   	case Working   : cout<<"Compressor "<<registered_engine_number
   						 <<" working"<<endl;
   					 break;
   	default        : ;
  }  
}

Compressor::~Compressor(){
	cout<<"Compressor "<<registered_engine_number<<" destroyed"<<endl;
}

PartStatus Compressor::isWorkingProperly(){ return status;}

void Compressor::setStatus(PartStatus _status){ status = _status;}

void Compressor::registerWithEngineNumber(short _engine_number){
	registered_engine_number = _engine_number;
}

short Compressor::getRegisteredEngineNumber(){return registered_engine_number;}
