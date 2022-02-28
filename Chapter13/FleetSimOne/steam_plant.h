/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef MY_STEAM_PLANT_H
#define MY_STEAM_PLANT_H
#include "plant.h"

class Steam_Plant : public Plant{
	public:
	  Steam_Plant(int thePsi);
	  virtual ~Steam_Plant();
	  virtual void LightOff_Plant();
	  virtual void ShutDown_Plant();
	  virtual bool Get_Plant_Status(); 
	private:
	  int itsPsi;
	  static int count;
	  bool status;
};
#endif
