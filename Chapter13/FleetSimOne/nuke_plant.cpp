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
  Filename: nuke_plant.cpp


**********************************/
#include <iostream.h>
#include "nuke_plant.h"

int Nuke_Plant::count = 0;

Nuke_Plant::Nuke_Plant(char *theModel) : itsModel(theModel), status(false){
	Nuke_Plant::count++;
}

Nuke_Plant::~Nuke_Plant(){
	Nuke_Plant::count--;
}

void Nuke_Plant:: LightOff_Plant(){
	cout<<"Reactor Critical!"<<endl;
	status = true;
}
	 
void Nuke_Plant::ShutDown_Plant(){
	cout<<"Nuke Plant Shut Down!"<<endl;
	status = false;
}

bool Nuke_Plant::Get_Plant_Status(){
	if(status)
	  cout<<"The "<<itsModel<<" is running fine!"<<endl;
	  else
	  	cout<<"Nuke plant secured!"<<endl;
	 return status;
}

