/***********************************************************     Copyright 2003 Rick Miller - Pulp Free Press           This source code accompanies the text C++ For Artists     and is provided for instructional purposes only. No      warranty concerning the quality of the code is expressed     or implied.	 You are free to use this code in your programs so long	 as this copyright notice is included in its entirety.**********************************************************/#ifndef C_H#define C_H#include <iostream>using namespace std;#include "a.h"class C : virtual public A{ public:    C(){cout<<"C constructor"<<endl;}    virtual ~C(){cout<<"C destructor"<<endl;}};#endif