/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "airflowsensor.h"
#include "engineutils.h"

AirFlowSensor::AirFlowSensor(PartStatus the_status, short the_engine_number) :
						  Sensor(the_status, the_engine_number), its_reading(0){
   #if MESSAGE_TRACE 
 	 cout<<"AirFlowSensor Object Created!"<<endl;
 	#endif						  
}

AirFlowSensor::~AirFlowSensor(){
  #if MESSAGE_TRACE 
   cout<<"AirFlowSensor Object Destroyed!"<<endl;
  #endif
}

char* AirFlowSensor::getComponentType(){ return "AirFlow Sensor";}

float AirFlowSensor::getReading(){return its_reading;}

void AirFlowSensor::setReading(float reading){ its_reading = reading;}
