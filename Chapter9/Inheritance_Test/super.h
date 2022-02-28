/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef SUPER_H
#define SUPER_H

#include <iostream>

using namespace std;

class Super {

	public:
		Super(){ m();}
		virtual ~Super(){};
		virtual void m(){ cout<<"Super m()!"<<endl;}
};


#endif
