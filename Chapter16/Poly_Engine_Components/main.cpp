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
#include "smallengine.h"

int main(){	

  Engine* engine_ptr = new SmallEngine();
  engine_ptr->enableComponents();
  if(engine_ptr->checkReady()){
    engine_ptr->startEngine();
    cout<<"Engine Started!"<<endl;
    }
    else cout<<"Engine could not start!"<<endl;
    
    
  delete engine_ptr;
    
	return 0;
}

