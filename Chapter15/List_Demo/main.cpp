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
#include <list> 

int main(){	
	list<int> l;
	
	l.push_back(82);
	l.push_back(25);
	l.push_back(63);
	l.push_back(8);
	l.push_back(75);
	l.push_back(12);
	l.push_back(23);
	l.push_back(129);
	l.push_back(273);
	l.push_back(1);
	
	for(list<int>::iterator i = l.begin(); i != l.end(); i++){
		cout<<*i<<" ";
	}
	cout<<endl;
	
	
	l.sort();
	
	for(list<int>::iterator i = l.begin(); i != l.end(); i++){
		cout<<*i<<" ";
	}
	cout<<endl;
	
	return 0;
}

