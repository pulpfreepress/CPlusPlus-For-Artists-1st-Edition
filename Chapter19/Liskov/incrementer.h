/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef INCREMENTER_H
#define INCREMENTER_H

class Incrementer {
  /*********************************************
   Class invariant: 0 <= Incrementer::val <= 100
   *********************************************/
  public:
  	Incrementer(int i = 0);
  	virtual ~Incrementer();
  /********************************************
  	 function: void increment(int i);
  	 precondition: 0 < i <= 5
  	postconditoin: 0 <= Incrementer::val <= 100
  ********************************************/
  	virtual void increment(int i);
  	
    
    
  private:
  	int val;
  	void checkInvariant();
};

#endif
