/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef MY_WEAPON_H
#define MY_WEAPON_H

class Weapon
{
	public:
		virtual void Train_Weapon() = 0;
		virtual void Fire_Weapon() = 0;
};

#endif
