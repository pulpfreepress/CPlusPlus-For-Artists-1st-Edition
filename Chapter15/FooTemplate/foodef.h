/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef FOOTEMPLATEDEF_H
#define FOOTEMPLATEDEF_H

template<class T>
class Foo{
	public:
		Foo(T _val);
		virtual ~Foo();
		void setVal(T _val);
		T getVal();
	private:
		T val;
};

template<class T>
Foo<T>::Foo(T _val):val(_val){}

template<class T>
Foo<T>::~Foo(){}

template<class T>
void Foo<T>::setVal(T _val){
	val = _val;
}

template<class T>
T Foo<T>::getVal(){
	return val;
}

#endif
