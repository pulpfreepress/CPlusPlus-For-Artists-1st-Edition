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
#include "dumbsort.h"
#include "foo.h"

int main(){	
	
	Foo foo_array[12];
	
	foo_array[0].setVal(5);
	foo_array[1].setVal(1);
	foo_array[2].setVal(9);
	foo_array[3].setVal(2);
	foo_array[4].setVal(22);
	foo_array[5].setVal(3);
	foo_array[6].setVal(7);
	foo_array[7].setVal(34);
	foo_array[8].setVal(6);
	foo_array[9].setVal(8);
	foo_array[10].setVal(84);
	foo_array[11].setVal(12);
	
	for(int i=0; i<12; i++){
		cout<<foo_array[i].getVal()<<" ";
		}
	cout<<endl;
	
	
	dumbSort<Foo, Foo>(foo_array, 0, 12,  compareAscending);
	
	for(int i=0; i<12; i++){
		cout<<foo_array[i].getVal()<<" ";
		}
	cout<<endl;
	
	dumbSort<Foo, Foo>(foo_array, 0, 12,  compareDescending);
	
	for(int i=0; i<12; i++){
		cout<<foo_array[i].getVal()<<" ";
		}
	cout<<endl;
	
	
	return 0;
}

