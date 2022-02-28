/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "engine.h"
   #if MESSAGE_TRACE
    #include <iostream>
    using namespace std;
  #endif

short Engine::engine_count = 1;

Engine::Engine():engine_number(engine_count++), its_status(NOTREADY){
 #if MESSAGE_TRACE
   cout<<"Engine Object Created!"<<endl;
 #endif
}

Engine::~Engine(){
  #if MESSAGE_TRACE
   cout<<"Engine Object Destroyed!"<<endl;
 #endif
}

short Engine::getEngineCount(){return engine_count;}

short Engine::getEngineNumber(){return engine_number;}

EngineStatus Engine::getEngineStatus(){return its_status;}

void Engine::setEngineStatus(EngineStatus the_status){its_status = the_status;}
