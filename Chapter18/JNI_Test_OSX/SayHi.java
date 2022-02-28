/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

import java.util.*;

public class SayHi {

    public native void sayHi();
    
    public void loadLibrary(String lib_name){
        System.loadLibrary(lib_name);
    }
    
    public static void main (String args[]) {
       SayHi sh = new SayHi();
       sh.loadLibrary(args[0]);
       sh.sayHi();
    }
    
}
