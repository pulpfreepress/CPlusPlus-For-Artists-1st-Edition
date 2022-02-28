/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f(int i);
void f();

void f(int i){printf("Hello World: %d\n", i);}
void f(){printf("Hello World: %d\n", 1);}

int main(void)
{
	f(3);
	f();
	
	
	return 0;
}

