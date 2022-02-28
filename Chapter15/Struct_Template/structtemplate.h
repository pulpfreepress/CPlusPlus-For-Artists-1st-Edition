/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef STRUCT_TEMPLATE_H
#define STRUCT_TEMPLATE_H

template<class T>
struct StructTemplate{
  StructTemplate(T val);
  T getVal();
  
  private:
    T val;
};

template<class T>
StructTemplate<T>::StructTemplate(T val){
   this->val = val;
}

template<class T>
T StructTemplate<T>::getVal(){ return val;}

#endif
