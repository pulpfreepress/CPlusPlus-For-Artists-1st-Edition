/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef I_COMPONENT_H
#define I_COMPONENT_H
#include "engineutils.h"
   #if MESSAGE_TRACE
      #include <iostream>
      using namespace std;
   #endif

class IComponent{
 public:
    IComponent(){
        #if MESSAGE_TRACE 
 	     cout<<"IComponent Object Created!"<<endl;
 	     #endif
    }
 	virtual ~IComponent(){
 	      #if MESSAGE_TRACE 
 	      cout<<"IComponent Object Destroyed!"<<endl;
 	      #endif
 	         }
 	virtual bool isWorkingProperly() = 0;
 	virtual void setStatus(PartStatus the_status) = 0;
 	virtual PartStatus getStatus() = 0;
 	virtual void registerWithEngineNumber(short the_engine_number) = 0;
 	virtual short getRegisteredEngineNumber() = 0;
 	virtual char* getComponentType() = 0;
 	virtual int getComponentCount() = 0;
 	virtual void enable() = 0;
 	virtual void disable() = 0;
};
#endif
