/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef SMALL_ENGINE
#define SMALL_ENGINE
#include "engine.h"
#include "icomponent.h"
#include "sensor.h"
#include "pump.h"
#include "fuelpump.h"
#include "waterpump.h"
#include "oilpump.h"
#include "oxygensensor.h"
#include "airflowsensor.h"
#include "temperaturesensor.h"

class SmallEngine : public Engine {
  public: 
    SmallEngine();
    virtual ~SmallEngine();
    virtual void enableComponents();
    virtual bool checkReady();
    virtual bool startEngine();
    virtual bool stopEngine();
  
  
  private:
    Pump* its_fuelpump;
    Pump* its_waterpump;
    Pump* its_oilpump;
    Sensor* its_oxygensensor;
    Sensor* its_airflowsensor;
    Sensor* its_temperaturesensor;
};
#endif
