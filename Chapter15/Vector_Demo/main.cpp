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
	vector<float> v;

	for(int i = 0; i<10; i++){
		v.push_back(i + .34);
	}
	
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
	cout<<endl;
	
	for(vector<float>::iterator i = v.begin(); i != v.end(); ++i){
		cout<<*i<<endl;
	}

	return 0;
}

