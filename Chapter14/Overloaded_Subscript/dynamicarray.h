/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef _DYNAMIC_ARRAY_H
#define _DYNAMIC_ARRAY_H

class DynamicArray{
  public:
  	DynamicArray(int _size = 5);
  	virtual ~DynamicArray();
  	int& operator[](unsigned i);
  	int getSize();
  private:
  	int* its_array;
  	int size;
};
#endif
