/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <iostream>
#include "vessel.h"
#include "submarine.h"
#include "Surface_Ship.h"
#include "weapon.h"
#include "ciws.h"
#include "torpedo.h"
#include "five_inch.h"
#include "plant.h"
#include "nuke_plant.h"
#include "steam_plant.h"
#include "gasturbine_plant.h"


int main()
{
/*****************************
  Make an array of pointers
  to base classes 

*****************************/

 Vessel *myNavy[2];
  
  
/*****************************
	Make some plants to power
	the vessels...

*****************************/

	Nuke_Plant 			Nuke1("Liquid Metal");
	Steam_Plant 		Steam1(1200);
	GasTurbine_Plant 	GasTurbine("LM5000");
	
	
/*****************************
  Make some weapons...

*****************************/

	Torpedo    Torpedo1("MK87", 25);
	Ciws       Ciws1("MK1001", 5000);
	Five_Inch  FiveInch1("Super Shot", 400);
	
	
/*****************************
  Construct various vessels...

*****************************/

	Submarine Sub1(Nuke1, Torpedo1, "SSN 714");
	Surface_Ship   Ship1(Steam1, FiveInch1, "Skimmer");
	
	

  
// load array with addresses of derrived class objects

	myNavy[0] = &Sub1;
	myNavy[1] = &Ship1;
	
// call polymorphic functions

	for(int i = 0; i<2; i++)
	{
		myNavy[i]->LightOff_Plant();
		myNavy[i]->Train_Weapon();
		myNavy[i]->Fire_Weapon();
		myNavy[i]->ShutDown_Plant();
	}
	
	
	return 0;
}

