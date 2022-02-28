/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef SENSOR_H
#define SENSOR_H
#include "component.h"
#include "engineutils.h"

class Sensor : public Component {
  public:
  	Sensor(PartStatus the_status = WORKING, short the_engine_number = 0);
  	virtual ~Sensor();

  	virtual void calibrate();
  	virtual void unCalibrate();
  	virtual void enableSensing();
  	virtual void disableSensing();
  	virtual float getReading() = 0;
  	virtual void setReading(float reading) = 0;
  	virtual bool isWorkingProperly();
  	virtual int getSensorCount();
  	
  private:
  	static int sensor_count;
  	enum SensorStatus {SENSING_ENABLED, SENSING_DISABLED};
  	enum SensorCalibration {UNCALIBRATED, CALIBRATED};
  	SensorStatus its_status;
  	SensorCalibration its_calibration;

};
#endif
