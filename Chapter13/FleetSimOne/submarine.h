/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef MY_SUBMARINE_H
#define MY_SUBMARINE_H
#include "vessel.h"

class Submarine : public Vessel{
	public:
	  Submarine(Plant &thePlant, Weapon &theWeapon, char *theName);
	  virtual ~Submarine();
	  virtual void LightOff_Plant();
	  virtual void ShutDown_Plant();
	  virtual void Train_Weapon();
	  virtual void Fire_Weapon();
	  virtual bool Get_Plant_Status();
	private:
	  char *itsName;
	  static int count;  
};
#endif
