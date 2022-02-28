/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/**********************************************

     Expressions

**********************************************/

#include <iostream>

using namespace std;  //introduces namespace std

class foo{

	public:
	
		foo(){i=3;}
		int i;
				
};

enum set_one {up, down, good, bad};



int main()
{	
	
	int i = (3 * 6);
	
	float f = float(i);
	
	cout<<f<<endl;
	
	
	cout<<i<<endl;
	
	
	cout<<typeid(float).name()<<endl;
	
	long * l_ptr;
	
	int i_val = reinterpret_cast<int>(l_ptr);
	
	//const int * ci = new int(378);
	
	//float *f2 = const_cast<float*>(&ci);
	
	
	foo f1;
	int foo::* ip = &foo::i;
	cout<<f1.*ip<<endl;
	
	cout<<7 * 3 + 1 - 201 % 20<<endl;
	
	cout<<(7 * (3 + 1)) - (201 % 20)<<endl;
	
	cout<<((((7 * 3) + 1) - 201) % 20)<<endl;
	
	int i2 = ((((7 * 3) + 1) - 201) % 20);
	
	cout<<i2<<endl;
	
	cout<<"***********************************"<<endl;
	
	int j=10, k=10000;
    int i3 = j*k;
    cout<<i3<<endl;
    
    cout<<"***********************************"<<endl;
    
    float f2 = 3.5f / 1.5f;
    
    cout<<f2<<endl;
    
  
    
    int result = 3.5f/1.5f;
    
    cout<<result<<endl;
	
	float f3 = (3.5 + 1.5) / 2.5;
	
	cout<<f3<<endl;
	
	int remainder = 215 % 20;
	cout<<remainder<<endl;
	
	
	set_one s1 = up;
	
	int i4 = s1 + good;
	
	cout<<i4<<endl;
	
	int int_array[] = {1,2,3,4,5};
	
	int int_val = *(int_array + 3);
	cout<<int_val<<endl;
	
	int_val = *((&int_array[4]) - 3);
	
	cout<<int_val<<endl;
	
	 cout<<"***********************************"<<endl;
	
	unsigned shift_val = 1;
	cout<<shift_val<<endl;
	
	shift_val = shift_val << 1;
	cout<<shift_val<<endl;
	
	shift_val = shift_val << 1;
	cout<<shift_val<<endl;
	
	shift_val = shift_val << 1;
	cout<<shift_val<<endl;
	
	shift_val = shift_val << 1;
	cout<<shift_val<<endl;
	
	 cout<<"***********************************"<<endl;
	 
	 int shift_val2 = 0xFFFFFFFF;
	 
	 shift_val2 = shift_val2 >> 1;
	 cout<<shift_val2<<endl;
	 
	 shift_val2 = shift_val2 >> 1;
	 cout<<shift_val2<<endl;
	
	 shift_val2 = shift_val2 >> 1;
	 cout<<shift_val2<<endl;
	 
	 shift_val2 = shift_val2 >> 1;
	 cout<<shift_val2<<endl;
	 
	 int shift_val3 = 0x80000000;
	 cout<<shift_val3<<endl;
	 
	 
	 shift_val3 = shift_val3 >> 1;
	 cout<<shift_val3<<endl;
	 
	  shift_val3 = shift_val3 >> 1;
	 cout<<shift_val3<<endl;
	 
	  shift_val3 = shift_val3 >> 1;
	 cout<<shift_val3<<endl;
	 
	  shift_val3 = shift_val3 >> 1;
	 cout<<shift_val3<<endl;
	 
	  shift_val3 = shift_val3 >> 1;
	 cout<<shift_val3<<endl;
	 
	 cout<<"***********************************"<<endl;
	 
	 int shift_val4 = 256;
	 cout<<shift_val4<<endl;
	 
	 shift_val4 = shift_val4 >> 1;
	 cout<<shift_val4<<endl;
	 
	  shift_val4 = shift_val4 >> 1;
	 cout<<shift_val4<<endl;
	 
	  shift_val4 = shift_val4 >> 1;
	 cout<<shift_val4<<endl;
	 
	  shift_val4 = shift_val4 >> 1;
	 cout<<shift_val4<<endl;
	 
	  shift_val4 = shift_val4 >> 1;
	 cout<<shift_val4<<endl;
	 
	  shift_val4 = shift_val4 >> 1;
	 cout<<shift_val4<<endl;
	 
	  cout<<"***********************************"<<endl;
	  
	  bool result2 =false;
	  
	  result2 = 3 < 5;
	  
	  cout<<result2<<endl;
	  
	  result2 = 3 == 5;
	  cout<<result2<<endl;
	  
	  result2 = 3 != 5;
	  cout<<result2<<endl;
	  
	   cout<<"***********************************"<<endl;
	   
	   (3<5) ? cout<<"True Statement"<<endl : cout<<"False Statement"<<endl;
	   
	  
	   
	   
	    cout<<"***********************************"<<endl;
	    
	    int a = 0;
	    
	    int b = 0;
	    
	    a = (b = 5);
	    
	    cout<<b<<" "<<a<<endl;
	    
	    int c = 0;
	    
	    a = (c = 10), (b = 8);
	    
	    cout<<a<<" "<<b<<" "<<c<<endl;
	    
	    (b < c), (a = 9);
	    
  
	 
	 
	
	
	
	return 0;
}

