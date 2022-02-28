/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "Ciws.h"
#include <iostream.h>

int Ciws::count = 0;


Ciws::Ciws(char *theModel, int theBullets) : Weapon(), itsBullets(theBullets),
		 itsModel(theModel)
{
	
	
	Ciws::count++;
	
}

Ciws::~Ciws()
{
	Ciws::count--;
}


void Ciws::Train_Weapon()
{

	cout<<"Ciws is locked on target!"<<endl;
}

void Ciws::Fire_Weapon()
{
	if(itsBullets)
	{
	cout<<"Sabots Away!"<<endl;
	itsBullets--;
	}
	else
	  cout<<"Ciws Out Of Ammo!"<<endl;
}

