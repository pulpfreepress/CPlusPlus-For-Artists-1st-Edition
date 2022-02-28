/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "Surface_Ship.h"
#include <iostream.h>
#include "plant.h"
#include "weapon.h"

int Surface_Ship::count = 0;

Surface_Ship::Surface_Ship(Plant &thePlant, Weapon &theWeapon, char *theName)
			        : Vessel(thePlant, theWeapon), itsName(theName){
	if((++Surface_Ship::count) == 1)
	cout<<"Constructor: There is "<<Surface_Ship::count<<" surface ship."<<endl;
	else
		cout<<"Constructor: There are "<<Surface_Ship::count<<" surface ships."<<endl;
}
			        
Surface_Ship::~Surface_Ship(){
	if((--Surface_Ship::count) == 1)
	cout<<"Destructor: There is "<<Surface_Ship::count<<" surface ship."<<endl;
	else
		cout<<"Destructor: There are "<<Surface_Ship::count<<" surface ships."<<endl;
}

void Surface_Ship::LightOff_Plant(){
	GetPlant().LightOff_Plant();
}

void Surface_Ship::ShutDown_Plant(){
	GetPlant().ShutDown_Plant();
}

void Surface_Ship::Train_Weapon(){
	GetWeapon().Train_Weapon();
}

void Surface_Ship::Fire_Weapon(){
	GetWeapon().Fire_Weapon();
}

bool Surface_Ship::Get_Plant_Status(){
	return GetPlant().Get_Plant_Status();
}
