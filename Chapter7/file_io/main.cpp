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
#include <fstream>
#include <iomanip>

using namespace std;  //introduces namespace std

int main()
{	
	
	
	ofstream out_file("test.txt", ios::out);
	
	for(int i=0; i<25; i++)
		out_file<<"Hello World\n";
		
		
	out_file.close();
	
	ifstream in_file("test.txt", ios::in);
	
	cout<<in_file.rdbuf();
	
	return 0;
}

