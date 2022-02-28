/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "torpedo.h"
#include <iostream.h>

int Torpedo::count = 0;

Torpedo::Torpedo(char *theModel, int theBullets) : Weapon(), itsBullets(theBullets),
		 itsModel(theModel){Torpedo::count++;}

Torpedo::~Torpedo(){Torpedo::count--;}


void Torpedo::Train_Weapon(){
	cout<<"Torpedo is locked on target!"<<endl;
}

void Torpedo::Fire_Weapon(){
	if(itsBullets)
	{
	cout<<"Fish In The Water!"<<endl;
	itsBullets--;
	}
	else
	   cout<<"Fresh Out Of Torpedos Captain!"<<endl;
}

