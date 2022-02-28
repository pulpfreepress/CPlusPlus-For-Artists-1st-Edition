/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "smallengine.h"


SmallEngine::SmallEngine(){
   its_fuelpump = new FuelPump(WORKING, getEngineNumber());
   its_waterpump = new WaterPump(WORKING, getEngineNumber());
   its_oilpump = new OilPump(WORKING, getEngineNumber());
   its_oxygensensor = new OxygenSensor(WORKING, getEngineNumber());
   its_airflowsensor = new AirFlowSensor(WORKING, getEngineNumber());
   its_temperaturesensor = new TemperatureSensor(WORKING, getEngineNumber());
   #if MESSAGE_TRACE
     cout<<"SmallEngine Object Created!"<<endl;
   #endif
}


SmallEngine::~SmallEngine(){
  delete its_fuelpump;
  delete its_waterpump;
  delete its_oilpump;
  delete its_oxygensensor;
  delete its_airflowsensor;
  delete its_temperaturesensor;
   #if MESSAGE_TRACE
     cout<<"SmallEngine Object Destroyed!"<<endl;
   #endif
}

void SmallEngine::enableComponents(){
  its_fuelpump->enable();
  its_waterpump->enable();
  its_oilpump->enable();
  its_oxygensensor->enable();
  its_airflowsensor->enable();
  its_temperaturesensor->enable();


}


bool SmallEngine::checkReady(){
  bool return_val = false;
 if(its_fuelpump->isWorkingProperly() 
    && its_waterpump->isWorkingProperly()
    && its_oilpump->isWorkingProperly()
    && its_oxygensensor->isWorkingProperly()
    && its_airflowsensor->isWorkingProperly()
    && its_temperaturesensor->isWorkingProperly()){
       setEngineStatus(READY);
       return_val = true;
    
    }else{
    	setEngineStatus(NOTREADY);
    	return_val = false;
    }
   return return_val;
}
	
	
	
bool SmallEngine::startEngine(){
   bool return_val = false;
   if(getEngineStatus() == READY){
     setEngineStatus(RUNNING);
     return_val = true;
   }else{
   	  return_val = false;
   	 }
   return return_val;
}

bool SmallEngine::stopEngine(){
  setEngineStatus(NOTREADY);
  return true;
}
