/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "temperaturesensor.h"
#include "engineutils.h"

TemperatureSensor::TemperatureSensor(PartStatus the_status, short the_engine_number) :
						  Sensor(the_status, the_engine_number), reading(0){
    #if MESSAGE_TRACE 
 	cout<<"TemperatureSensor Object Created!"<<endl;
 	#endif						  
}

TemperatureSensor::~TemperatureSensor(){
   #if MESSAGE_TRACE 
 	cout<<"TemperatureSensor Object Destroyed!"<<endl;
 	#endif
}

char* TemperatureSensor::getComponentType(){ return "Temperature Sensor";}

float TemperatureSensor::getReading(){ return reading;}

void TemperatureSensor::setReading(float reading){
		this->reading = reading;
 }
