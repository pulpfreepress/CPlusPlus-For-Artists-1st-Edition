/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "dynamicarray.h"

DynamicArray::DynamicArray(int _size):size(_size){
	its_array = new int[_size];
	for(int i=0; i<size; i++)
		its_array[i] = 0;
}

DynamicArray::~DynamicArray(){
	delete[] its_array;
}

int& DynamicArray::operator[](unsigned i){
	if(i >= (size)){
	   int newsize = size+10;
	   int* temp = new int[size];
	   for(int j = 0; j<size; j++){
	   		temp[j] = its_array[j];
	   	}
	   	delete[] its_array;
	    its_array = new int[newsize];
	    for(int j = 0; j<size; j++){
	   		its_array[j] = temp[j];
	    }
	    
	    for(int j=size; j<newsize; j++){
	    	its_array[j] = 0;
	    }
	   delete[] temp;
	   size = newsize;
	  
	  return its_array[i];
	} else return its_array[i];
}

int DynamicArray::getSize(){ return size;}
		
