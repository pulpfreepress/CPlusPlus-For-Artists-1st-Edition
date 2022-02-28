/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "submarine.h"
#include <iostream.h>
#include "plant.h"
#include "weapon.h"

int Submarine::count = 0;

Submarine::Submarine(Plant &thePlant, Weapon &theWeapon, char *theName)
			        : Vessel(thePlant, theWeapon), itsName(theName){
	if((++Submarine::count) == 1)
	cout<<"Constructor: There is "<<Submarine::count<<" submarine."<<endl;
	else
		cout<<"Constructor: There are "<<Submarine::count<<" submarines."<<endl;
}
			        
Submarine::~Submarine(){
    if((--Submarine::count) == 1)
	cout<<"Destructor: There is "<<Submarine::count<<" submarine."<<endl;
	else
		cout<<"Destructor: There are "<<Submarine::count<<" submarines."<<endl;
}


void Submarine::LightOff_Plant(){
	GetPlant().LightOff_Plant();
}


void Submarine::ShutDown_Plant(){
	GetPlant().ShutDown_Plant();
}


void Submarine::Train_Weapon(){
	GetWeapon().Train_Weapon();
}

void Submarine::Fire_Weapon(){
	GetWeapon().Fire_Weapon();
}

bool Submarine::Get_Plant_Status(){
	return GetPlant().Get_Plant_Status();
}
