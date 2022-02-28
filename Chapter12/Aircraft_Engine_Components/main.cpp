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
using namespace std;  

#include "engine.h"

int main()
{	
	Engine e1,e2;
	
	e1.checkEngineStatus();
	e2.checkEngineStatus();
	
	e1.stopEngine();
	
	e1.startEngine();
	e2.startEngine();
	
	e1.setCompressorStatus(NotWorking);
	e1.checkEngineStatus();
	
	return 0;
}

