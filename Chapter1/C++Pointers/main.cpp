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

using namespace std;  //introduces namespace std

int main()
{	
	const int ARRAYSIZE = 5;
	int a, b(3);
	int intarray[ARRAYSIZE];
	
	cout<<"The value of a: "<<a<<endl;
	cout<<"The value of b: "<<b<<endl;
	cout<<"The address of a: "<<&a<<endl;
	cout<<"The address of b: "<<&b<<endl;
	
	a = b;
	
	cout<<"The value of a: "<<a<<endl;
	cout<<"The value of b: "<<b<<endl;
	
	int *intptr = &a;
	
	cout<<"The value of intprt: "<<intptr<<endl;
	cout<<"The value of a accessed via intptr: "<<*intptr<<endl;
	
	//change the value of a via intptr
	
	*intptr = 4;
	
	cout<<"The value of a: "<<a<<endl;
	cout<<"The value of a accessed via intptr: "<<*intptr<<endl;
	
	//assign values to array elements
	
	intarray[0] = 10;
	intarray[1] = 20;
	intarray[2] = 30;
	intarray[3] = 40;
	intarray[4] = 50;
	
	//print each array element 
	
	for(int i=0; i<ARRAYSIZE; i++)
		cout<<intarray[i]<<endl;
		
	cout<<"The address of intarray: "<<intarray<<endl;
	
	cout<<"The value of intarray[0] accessed pointer style: "<<*(intarray)<<endl;
	
	cout<<"The value of intarray[1] accessed pointer style: "<<*(intarray+1)<<endl;
	
	cout<<"The value of intarray[2] accessed pointer style: "<<*(intarray+2)<<endl;
	
	int *intptr2 = new int[5];
	
	cout<<intptr2<<endl;
	cout<<&intptr2[0]<<endl;
	
	for(int i=0; i<5; i++)
	   cout<<(intptr[i] = (i*10))<<endl;
	   
	
	
		
	
	
	
	return 0;
}

