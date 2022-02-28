/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef MY_PLANT_H
#define MY_PLANT_H

class Plant
{
   public:
	virtual void LightOff_Plant() = 0;
	virtual void ShutDown_Plant() = 0;
	virtual bool Get_Plant_Status() = 0;
  
};


#endif
