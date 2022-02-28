/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/*****************************
       C Pointers
 ******************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
	int a = 1, b = 2;
	
	printf("%d, %d", a, b);
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("%d, %d", a, b);
	
	return 0;
}

