/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef MY_CIWS_H
#define MY_CIWS_H

#include "weapon.h"

class Ciws : public Weapon
{
	public:
		Ciws(char *theModel, int theBullets);
		virtual ~Ciws();
		virtual void Train_Weapon();
		virtual void Fire_Weapon();
	
	private:
		char *itsModel;
		int itsBullets;
		static int count;
};		

#endif
