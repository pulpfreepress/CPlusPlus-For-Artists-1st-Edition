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
#include <vector>

int main(){	
	vector<float> v(10);
	
	for(int i=0; i<10; i++){
		v[i] = ( i + .25);
	}
	
	for(int i=0; i<10; i++){
		cout<<v[i]<<endl;
	}
	
	return 0;
}

