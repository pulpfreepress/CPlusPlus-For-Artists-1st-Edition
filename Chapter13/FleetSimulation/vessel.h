/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef MY_VESSEL_H
#define MY_VESSEL_H

#include <vector.h>


class Plant;
class Weapon;

class Vessel
{
	public:
	  Vessel(Plant &thePlant, vector<Weapon*> &theWeapon_Array);
	  virtual ~Vessel();
	  virtual void LightOff_Plant() = 0;
	  virtual void ShutDown_Plant() = 0;
	  virtual void Train_Weapon() = 0;
	  virtual void Fire_Weapon() = 0;
	  virtual bool Get_Plant_Status() = 0;
	 
	protected:
	  Plant &GetPlant() {return itsPlant;}
	  vector<Weapon*> &GetWeapon_Array() {return itsWeapon_Array;}
	
	private:
	  Plant &itsPlant;
	  vector<Weapon*> &itsWeapon_Array;
	  static int count;
	 
	  
};
#endif
