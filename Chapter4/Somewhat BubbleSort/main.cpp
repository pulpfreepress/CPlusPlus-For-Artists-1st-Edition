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
	
	int a[] = {11,10,9,8,7,6,5,4,3,2,1,0};
	
	int innerloop = 0;
	int outerloop = 0;
	int swaps = 0;
	bool swap_occured = true;
	
	for(int i = 11; i>=1; i--){
	    
	  outerloop++;
	
		for(int j = 1; j<= i; j++){
		
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

