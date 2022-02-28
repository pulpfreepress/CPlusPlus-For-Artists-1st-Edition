/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef ENGINE_H
#define ENGINE_H
#include "aircraftutils.h"
#include "fuelpump.h"
#include "oxygensensor.h"
#include "oilpump.h"
#include "compressor.h"
#include "temperaturesensor.h"


class Engine{
  public:
 	Engine();
 	~Engine();
	EngineStatus checkEngineStatus();
	void startEngine();
	void stopEngine();
	void setFuelPumpStatus(PartStatus _status);
	void setOilPumpStatus(PartStatus _status);
	void setTemperatureSensorStatus(PartStatus _status);
	void setOxygenSensorStatus(PartStatus _status);
	void setCompressorStatus(PartStatus _status);
	
  private:
  	static short      engine_count;
  	FuelPump          its_fuel_pump;
  	OilPump           its_oil_pump;
  	TemperatureSensor its_temperature_sensor;
  	OxygenSensor      its_oxygen_sensor;
  	Compressor		  its_compressor;
  	short 			  its_engine_number;
  	EngineStatus	  its_status;
  	bool 			  engine_is_running;
  
};


#endif
