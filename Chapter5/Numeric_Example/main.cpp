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
#include <limits>

using namespace std;  

int main(){	
	
	numeric_limits<int> _i;
	
	cout<<"Integer Range:  "<<_i.min()<<"  "<<_i.max()<<endl;
	
	
	return 0;
}

