/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/**********************************
  Filename: steam_plant.cpp


**********************************/
#include <iostream.h>
#include "steam_plant.h"

int Steam_Plant::count = 0;

Steam_Plant::Steam_Plant(int thePsi) :itsPsi(thePsi), status(false){
	Steam_Plant::count++;
}

Steam_Plant::~Steam_Plant(){
	Steam_Plant::count--;
}

void Steam_Plant:: LightOff_Plant(){
	cout<<"Steam Plant Lit Off!"<<endl;
	cout<<"Stack Clear!"<<endl;
	status = true;
}
	 
void Steam_Plant::ShutDown_Plant(){
	cout<<"Steam Plant Shut Down!"<<endl;
	status = false;
}

bool Steam_Plant::Get_Plant_Status(){
	if(status)
	  cout<<"Plant's running fine! There's "<<itsPsi<<" psi at the main stop valves!"<<endl;
	  else
	  	cout<<"Steam plant secured!"<<endl;
	 return status;
}

