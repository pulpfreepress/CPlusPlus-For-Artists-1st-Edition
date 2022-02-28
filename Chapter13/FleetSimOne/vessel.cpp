/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/********************************************
  Filename:  vessel.cpp
********************************************/

#include "vessel.h"
#include <iostream.h>

int Vessel::count = 0;

Vessel::Vessel(Plant &thePlant, Weapon &theWeapon) : itsPlant(thePlant),
			   itsWeapon(theWeapon) {
	if((++Vessel::count) == 1)
	cout<<"Constructor: There is "<<Vessel::count<<" vessel."<<endl;
	else
		cout<<"Constructor: There are "<<Vessel::count<<" vessels."<<endl;
}
			  
			  			  
Vessel::~Vessel(){
	if((--Vessel::count) == 1)
	cout<<"Destructor: There is "<<Vessel::count<<" vessel."<<endl;
	else
		cout<<"Destructor: There are "<<Vessel::count<<" vessels."<<endl;
}
