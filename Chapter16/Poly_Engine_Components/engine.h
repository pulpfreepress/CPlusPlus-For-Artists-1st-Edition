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
#include "engineutils.h"
 
class Engine {
  public:
  	Engine();
  	virtual ~Engine();
            short getEngineCount();
            short getEngineNumber();
            EngineStatus getEngineStatus();
            
            void setEngineStatus(EngineStatus the_status);
    virtual void enableComponents() = 0;
  	virtual bool checkReady() = 0;
  	virtual bool startEngine() = 0;
  	virtual bool stopEngine() = 0; 
  	
  private:
    static short engine_count;
    short engine_number;
    EngineStatus its_status;
};
#endif
