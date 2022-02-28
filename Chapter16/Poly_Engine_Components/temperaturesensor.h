/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H
#include "engineutils.h"
#include "sensor.h"

class TemperatureSensor : public Sensor {
  public:
  	TemperatureSensor(PartStatus the_status = WORKING, short the_engine_number = 0);
  	virtual ~TemperatureSensor();
  	virtual char* getComponentType();
  	virtual float getReading();
  	virtual void setReading(float reading);
  private:
  	float reading;

};
#endif
