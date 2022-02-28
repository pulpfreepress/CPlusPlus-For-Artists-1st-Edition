/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef MY_NUKE_PLANT_H
#define MY_NUKE_PLANT_H
#include "plant.h"

class Nuke_Plant : public Plant{
	public:
	  Nuke_Plant(char *theModel);
	  virtual ~Nuke_Plant();
	  virtual void LightOff_Plant();
	  virtual void ShutDown_Plant();
	  virtual bool Get_Plant_Status();  
	private:
	  char *itsModel;
	  static int count;
	  bool status;
};
#endif
