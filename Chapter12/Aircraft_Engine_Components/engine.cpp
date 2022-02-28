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
#include "oxygensensor.h"
#include "oilpump.h"
#include "compressor.h"
#include "temperaturesensor.h"
#include "engine.h"
#include <iostream>
using namespace std;


short Engine::engine_count = 1;

Engine::Engine():its_engine_number(engine_count++), engine_is_running(false), 
				 its_fuel_pump(Working, engine_count), 
				 its_oil_pump(Working, engine_count), 
				 its_temperature_sensor(Working, engine_count),
				 its_oxygen_sensor(Working, engine_count), 
				 its_compressor(Working, engine_count)  {}

Engine::~Engine(){
	engine_count--;
}

EngineStatus Engine::checkEngineStatus(){
	if(its_fuel_pump.isWorkingProperly() 
	    && its_oil_pump.isWorkingProperly()
	    && its_temperature_sensor.isWorkingProperly() 
	    && its_oxygen_sensor.isWorkingProperly()
	    && its_compressor.isWorkingProperly()){
	       its_status = Ready;
	       cout<<"All engine number "<<its_engine_number
	       	   <<" components working properly."<<endl;
	       }
	       else{
	          its_status = NotReady;
	          cout<<"Engine number "<<its_engine_number<<" malfunction!"<<endl;
	          stopEngine();
	           
	         }
	       
	 return its_status;
}

void Engine::startEngine(){
	if(!engine_is_running && checkEngineStatus()){
		cout<<"Engine number "<<its_engine_number<<" started."<<endl;
		engine_is_running = true;
	}
	else cout<<"Engine number "<<its_engine_number<<" cannot start."<<endl;
}

void Engine::stopEngine(){
	if(engine_is_running){
		engine_is_running = false;
		cout<<"Engine number "<<its_engine_number<<" stopped."<<endl;
	}
	else cout<<"Engine "<<its_engine_number<<" not running!"<<endl;
}

void Engine::setFuelPumpStatus(PartStatus _status){
	its_fuel_pump.setStatus(_status);
}

void Engine::setOilPumpStatus(PartStatus _status){
	its_oil_pump.setStatus(_status);
}

void Engine::setTemperatureSensorStatus(PartStatus _status){
	its_temperature_sensor.setStatus(_status);
}

void Engine::setOxygenSensorStatus(PartStatus _status){
	its_oxygen_sensor.setStatus(_status);
}

void Engine::setCompressorStatus(PartStatus _status){
	its_compressor.setStatus(_status);
}

