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
#include <algorithm>

int main(){	
	vector<int> v;

	v.push_back(25);
	v.push_back(278);
	v.push_back(57);
	v.push_back(82);
	v.push_back(2);
	v.push_back(29);
	v.push_back(485);
	v.push_back(123);
	v.push_back(1);
	v.push_back(10);
	
	
	for(int i = 0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	sort(v.begin(), v.end());
	
	for(vector<int>::iterator i = v.begin(); i != v.end(); ++i){
		cout<<*i<<" ";
	}

	return 0;
}

