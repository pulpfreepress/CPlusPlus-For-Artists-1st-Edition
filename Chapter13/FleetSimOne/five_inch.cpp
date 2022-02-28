/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "five_inch.h"
#include <iostream.h>

int Five_Inch::count = 0;


Five_Inch::Five_Inch(char *theModel, int theBullets) : Weapon(), itsBullets(theBullets),
		 itsModel(theModel){ Five_Inch::count++;}

Five_Inch::~Five_Inch(){ Five_Inch::count--;}


void Five_Inch::Train_Weapon(){
	cout<<"Five Inch Gun is locked on target!"<<endl;
}

void Five_Inch::Fire_Weapon(){
	if(itsBullets)
	{
	cout<<"Blam!"<<endl;
	itsBullets--;
	}
	 else 
	   cout<<"Five Inch Gun Out Of Ammo!"<<endl;	   
}

