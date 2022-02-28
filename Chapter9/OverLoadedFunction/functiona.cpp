/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "functiona.h"
#include <iostream>
using namespace std;

void functionA(){
	cout<<"functionA: no arguments"<<endl;
}

void functionA(int i){
	cout<<"functionA: int argument = "<<i<<endl;
}

void functionA(float f){
	cout<<"functionA: float argument = "<<f<<endl;
}

void functionA(int i, int j){
	cout<<"functionA: two int arguments = "<<i<<", "<<j<<endl;
}

void functionA(char message[]){
	cout<<"functionA: char string = "<<message<<endl;
}
