/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

/****************************************************
	
	Value Ranges - type sizes

****************************************************/



#include <iostream>
#include <limits>


using namespace std;  //introduces namespace std

int main()
{	

 	bool b;
	numeric_limits<bool> _b;
	cout<<"bool:                   "<<sizeof b<<" "<< (int)_b.min()<<" "<<(int)_b.max()<<endl;
	


	signed char sc;
	numeric_limits<signed char> _sc;
	cout<<"signed char:            "<<sizeof sc<<" "<< (int)_sc.min()<<" "<<(int)_sc.max()<<endl;
	
	
	
	unsigned char uc;
	numeric_limits<unsigned char> _uc;
	cout<<"unsigned char:          "<<sizeof uc<<"  "<<(unsigned)_uc.min()<<" "<<(unsigned)_uc.max()<<endl;
	
	
	char c;
	numeric_limits<char> _c;
	cout<<"char:                   "<<sizeof c<<"  "<<(int)_c.min()<<" "<<(int)_c.max()<<endl;
	
	
	wchar_t wc;
	numeric_limits<wchar_t> _wc;
	cout<<"wchat_t:                "<<sizeof wc<<" "<< (int)_wc.min()<<" "<<(int)_wc.max()<<endl;
	
	
	
	signed short int ssi;
	numeric_limits<signed short int> _ssi;
	cout<<"signed short int:       "<<sizeof ssi<<"  "<<(int)_ssi.min()<<" "<<(int)_ssi.max()<<endl;
	
	
	unsigned short int usi;
	numeric_limits<unsigned short int> _usi;
	cout<<"unsigned short int:     "<<sizeof usi<<"  "<<(int)_usi.min()<<" "<<(int)_usi.max()<<endl;
	
	
	short int si;
	numeric_limits<short int> _si;
	cout<<"short int:              "<<sizeof si<<"  "<<(int)_si.min()<<" "<<(int)_si.max()<<endl;
	
	signed int sii;
	numeric_limits<signed int> _sii;
	cout<<"signed int:             "<<sizeof sii<<"  "<<_sii.min()<<" "<<_sii.max()<<endl;
	
	
	
	unsigned int ui;  
	numeric_limits<unsigned int> _ui;
	cout<<"unsigned int:           "<<sizeof ui<<"  "<<_ui.min()<<" "<<_ui.max()<<endl;
	
	
	int i;
	numeric_limits<int> _i;
	cout<<"int:                    "<<sizeof i<<"  "<<_i.min()<<" "<<_i.max()<<endl;
	
	
	signed long int sli;
	numeric_limits<signed long int> _sli;
	cout<<"signed long int:        "<<sizeof sli<<"  "<<_sli.min()<<" "<<_sli.max()<<endl;
	
	
	unsigned long int uli;
	numeric_limits<unsigned long int> _uli;
	cout<<"unsigned long int:      "<<sizeof uli<<"  "<<_uli.min()<<" "<<_uli.max()<<endl;
	
	
	long int li;
	numeric_limits<long int> _li;
	cout<<"long int:               "<<sizeof li<<"  "<<_li.min()<<" "<<_li.max()<<endl;
	
	
	signed long long int slli;
	numeric_limits<signed long long int> _slli;
	cout<<"signed long long int:   "<<sizeof slli<<"  "<<_slli.min()<<" "<<_slli.max()<<endl;
	
	
	unsigned long long int ulli;
	numeric_limits<unsigned long long int> _ulli;
	cout<<"unsigned long long int: "<<sizeof ulli<<"  "<<_ulli.min()<<" "<<_ulli.max()<<endl;
	
	
	long long int lli;
	numeric_limits<long long int> _lli;
	cout<<"long long int:          "<<sizeof lli<<"  "<<_lli.min()<<" "<<_lli.max()<<endl;
	
	
	float f;
	numeric_limits<float> _f;
	cout<<"float:                  "<<sizeof f<<"  "<<_f.min()<<" "<<_f.max()<<endl;
	
	
	double d;
	numeric_limits<double> _d;
	cout<<"double:                 "<<sizeof d<<"  "<<_d.min()<<" "<<_d.max()<<endl;
	
	
	long double ld;
	numeric_limits<long double> _ld;
	cout<<"long double:            "<<sizeof ld<<"  "<<_ld.min()<<" "<<_ld.max()<<endl;
	
	
	
	
	return 0;
}

