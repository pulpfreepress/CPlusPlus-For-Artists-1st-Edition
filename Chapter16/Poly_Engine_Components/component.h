/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef COMPONENT_H
#define COMPONENT_H
#include "engineutils.h"
#include "icomponent.h"

class Component : public IComponent{
 public:
 	Component(PartStatus the_status = WORKING, short the_engine_number = 0);
 	virtual ~Component();
 	virtual void setStatus(PartStatus the_status);
 	virtual PartStatus getStatus();
 	virtual void registerWithEngineNumber(short the_engine_number);
 	virtual short getRegisteredEngineNumber();
 	virtual int getComponentCount();
 	virtual bool isWorkingProperly();
 	virtual void enable();
 	virtual void disable();
 	
 private:
 	PartStatus its_status;
 	short registered_engine_number;
 	static int component_count;
};
#endif
