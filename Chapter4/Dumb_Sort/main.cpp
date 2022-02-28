/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <iostream.h>



int main()
{	
	
	int a[] = {1, 10, 7, 3, 9, 2, 4, 6, 5, 8, 0, 11};
	
	int innerloop = 0;
	int outerloop = 0;
	int swaps = 0;
	
	for(int i = 0; i<12; i++){
	    
	  outerloop++;
	
		for(int j = 1; j<12; j++){
		
		  innerloop++;
		
			if(a[j-1] > a[j]) {
			
					int temp = a[j-1];
					a[j-1] = a[j];
					a[j] = temp;
					swaps++;
					}
					
		  
	  }
	   
	}		
		
	for(int i = 0; i<12; i++)
		cout<<a[i]<<" ";
		
	cout<<endl;
	cout<<"Outer loop executed "<<outerloop<<" times."<<endl;
	cout<<"Inner loop executed "<<innerloop<<" times."<<endl;
	cout<<swaps<<" swaps completed."<<endl;
	
	
	return 0;
}


