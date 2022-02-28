/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef BAR_H
#define BAR_H
#include "ibar.h"

class Bar : public IBar {
  public:
  	Bar();
  	virtual ~Bar();
  	virtual void b();
};
#endif
