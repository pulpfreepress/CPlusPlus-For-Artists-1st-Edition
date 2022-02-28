/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include "SayHi.h"
#include "jni.h"
#include <iostream>
using namespace std;




JNIEXPORT void JNICALL Java_SayHi_sayHi(JNIEnv * env, jobject jo){
  
  
   cout<<"C++ SayHi function working fine!"<<endl;

  }
