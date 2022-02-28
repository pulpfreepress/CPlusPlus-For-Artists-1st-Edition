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
  Filename: gasturbine_plant.cpp

**********************************/
#include <iostream.h>
#include "gasturbine_plant.h"

int GasTurbine_Plant::count = 0;


GasTurbine_Plant::GasTurbine_Plant(char *theModel) : itsModel(theModel), status(false){
	GasTurbine_Plant::count++;
}

GasTurbine_Plant::~GasTurbine_Plant(){
	GasTurbine_Plant::count--;
}

void GasTurbine_Plant:: LightOff_Plant(){
	cout<<"Gas Turbine Plant Lit Off!"<<endl;
	cout<<"All Indications Normal!"<<endl;
	status = true;
}
	 
void GasTurbine_Plant::ShutDown_Plant(){
	cout<<"GasTurbine Plant Shut Down!"<<endl;
	status = false;
}



bool GasTurbine_Plant::Get_Plant_Status(){
	if(status)
	  cout<<"The "<<itsModel<<" is running fine!"<<endl;
	  else
	  	cout<<"Gas Turbine Plant Secured!"<<endl; 
	 return status;
}

