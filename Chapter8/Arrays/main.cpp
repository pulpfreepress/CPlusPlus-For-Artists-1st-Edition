/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#include <iostream>

using namespace std;  //introduces namespace std

int main()
{	

	/*************************************
	{
	 int int_array[] = {1,2,3,4,5};
	 
	 for(int i=0; i<((sizeof int_array)/4); i++)
	 		cout<<int_array[i]<<endl;
	
	
	}
	************************************
	{
	 int number_list[3];
	 
	 for(int i=0; i<3; i++)
	 		cout<<number_list[i]<<endl;
	
	
	}
	***********************************
	
	{
	
	 int number_list[3] = {};
	
	  for(int i=0; i<3; i++)
	 		cout<<number_list[i]<<endl;
	
	
	
	}
	/***********************************
	{
	
	 int number_list[] = {1,2,3,4,5,6,7,8,9,10};
	
	  for(int i=0; i<((sizeof number_list)/4); i++)
	 		cout<<number_list[i]<<endl;
	
	
	
	}
	
	************************************
	
	{
	
	 int number_list[10] = {3};
	
	  for(int i=0; i<((sizeof number_list)/4); i++)
	 		cout<<number_list[i]<<endl;
	
	
	
	}
	
	**********************************
	
	
	{
	
	 int *int_pointers[3]  = {NULL};
	
	  for(int i=0; i<3; i++)
	 		cout<<int_pointers[i]<<endl;
	
	
	
	}
	***********************************
	
	{
	
	 int int_array[5];
	 
	 int_array[0] = 1;
	 int_array[1] = 2;
	 int_array[2] = 3;
	 int_array[3] = 4;
	 int_array[4] = 5;
	 
	 
	cout<<int_array[0]<<endl;
	cout<<int_array[1]<<endl;
	cout<<int_array[2]<<endl;
	cout<<int_array[3]<<endl;
	cout<<int_array[4]<<endl;
	
	}
	*******************************
	
	{
	 int int_array[5];
	
	 for(int i = 0; i<5; i++)
	 	int_array[i] = i+1;
	 	
	 for(int i = 0; i<5; i++)
	 	cout<<int_array[i]<<endl;
	
	
	
	}
	
	*******************************
	
	{
	 int int_array[5];
	 
	 for(int i = 0; i<5; i++)
	 	*(int_array + i) = i+1;
	 	
	 for(int i = 0; i<5; i++)
	 	cout<<*(int_array + i)<<endl;
	 	
	
	}
	
	****************************
	
	
	{
	 int *int_pointers[3] = {NULL};
	 
	 for(int i = 0; i<3; i++)
	 	int_pointers[i] = new int(i+1);
	 	
	 
	 for(int i = 0; i<3; i++)
	 	cout<<*int_pointers[i]<<endl;
	 	
	 for(int i = 0; i<3; i++)
	 	delete int_pointers[i];
	
	}
	
	***************************
	{
	const int SHEETS   = 5;
	const int ROWS     = 5;
	const int COLUMNS  = 5;
	
	int three_d_int_array[SHEETS][ROWS][COLUMNS] = {};
	
	for(int i = 0; i<SHEETS; i++){
		for(int j = 0; j<ROWS; j++){
			for(int k = 0; k< COLUMNS; k++){
				cout<<three_d_int_array[i][j][k];
				}
			cout<<endl;
		}
		cout<<endl;
	}
	
				
	}
	
	/**********************************
	
	{
	const int SHEETS   = 5;
	const int ROWS     = 5;
	const int COLUMNS  = 5;
	
	int three_d_int_array[SHEETS][ROWS][COLUMNS] = {{{1,2,3,4,5},
													 {1,2,3,4,5},
													 {1,2,3,4,5},
													 {1,2,3,4,5},
													 {1,2,3,4,5}}};
	
	for(int i = 0; i<SHEETS; i++){
		for(int j = 0; j<ROWS; j++){
			for(int k = 0; k< COLUMNS; k++){
				cout<<three_d_int_array[i][j][k];
				}
			cout<<endl;
		}
		cout<<endl;
	}
	
	}
	***********************************
	
	{
	const int SHEETS   = 5;
	const int ROWS     = 5;
	const int COLUMNS  = 5;
	
	int three_d_int_array[SHEETS][ROWS][COLUMNS] = {{{1,2,3,4,5}},
													{{1,2,3,4,5}},
													{{1,2,3,4,5}},
													{{1,2,3,4,5}},
													{{1,2,3,4,5}}};
	
	for(int i = 0; i<SHEETS; i++){
		for(int j = 0; j<ROWS; j++){
			for(int k = 0; k< COLUMNS; k++){
				cout<<three_d_int_array[i][j][k];
				}
			cout<<endl;
		}
		cout<<endl;
	}
	
	}
	\*****************************************
	
	
	{
	const int SHEETS   = 5;
	const int ROWS     = 5;
	const int COLUMNS  = 5;
	
	int three_d_int_array[SHEETS][ROWS][COLUMNS] = {{{1,2,3}, {1,2,3}, {1,2,3} },
													{{1,2,3}, {1,2,3}, {1,2,3} },
													{{1,2,3}, {1,2,3}, {1,2,3} },
													{{1,2,3}, {1,2,3}, {1,2,3} },
													{{1,2,3}, {1,2,3}, {1,2,3} }};
	
	for(int i = 0; i<SHEETS; i++){
		for(int j = 0; j<ROWS; j++){
			for(int k = 0; k< COLUMNS; k++){
				cout<<three_d_int_array[i][j][k];
				}
			cout<<endl;
		}
		cout<<endl;
	}
	
	}
	
	/****************************************
	
	
	
	{
	 int **int_pointer_array = new int*[3];
	 
	 for(int i = 0; i<3; i++)
	 	int_pointer_array[i] = new int(i+1);
	 	
	 for(int i = 0; i<3; i++)
	 	cout<<*int_pointer_array[i]<<endl;
	
	for(int i = 0; i<3; i++)
		delete int_pointer_array[i];
		
	delete[] int_pointer_array;
	
	}
	
	/***************************************
	
	{
	int array_size = 0;
	int *int_array = NULL;
	
	cout<<"Please enter array size: ";
	cin>>array_size;
	
	int_array = new int[array_size];
	
	
	for(int i=0; i<array_size; i++)
		int_array[i] = i+1;
		
	for(int i=0; i<array_size; i++)
		cout<<int_array[i]<<endl;
		
		
	delete[] int_array;
	
	}
	
	
	/*********************************
	
	{
	  	      int rows = 5;
	 	const int cols = 5;
	 int (*two_d_int_array)[cols];
	 
	cout<<"Please enter the number of rows: ";
	cin>>rows;
	 
	 two_d_int_array = new int[rows][cols];
	 
	 for(int i=0; i<rows; i++)
	 	for(int j=0; j<cols; j++)
	 		two_d_int_array[i][j] = j+1;
	 		
	  for(int i=0; i<rows; i++){
	 	for(int j=0; j<cols; j++){
	 		cout<<two_d_int_array[i][j];
	 	}
	 	cout<<endl;
	 
	 }
	 
	 delete[] two_d_int_array;
	 		
	}
	
	
	
	/********************************
	
	{
	
	 int rows = 0;
	 int cols = 0;
	 
	 int **two_d_int_array;
	 
	 cout<<"Please enter number of rows and columns: ";
	 cin>>rows>>cols;
	 
	 two_d_int_array = new int*[rows];
	 
	 
	 for(int i=0; i<rows; i++)
	    two_d_int_array[i] = new int[cols];
	    
	  
	 for(int i=0; i<rows; i++)
	 	for(int j=0; j<cols; j++)
	 		two_d_int_array[i][j] = j+1;
	 		
	  for(int i=0; i<rows; i++){
	 	for(int j=0; j<cols; j++){
	 		cout<<two_d_int_array[i][j];
	 	}
	 	cout<<endl;
	 
	 }
	 
	 for(int i = 0; i<rows; i++)
	 	delete[] two_d_int_array[i];
	 
	 delete[] two_d_int_array;
	
	}
	
	/*********************************************
	
	{
	 char string1[] = "C++ For Artists";
	 
	 cout<<string1;
	
	}
	
	/*******************************************
	
	{
	
	char string1[] = {'C', '+', '+', ' ', 'F', 'o', 'r', ' ', 'A', 'r', 't', 'i', 's', 't', 's', '\0'};
	
	cout<<string1<<endl;
	
	
	
	
	}
	
	/**************************************
	
	{
	 int code_array[256];
	 
	 code_array['c'] = 3333;
	 
	 cout<<code_array['c'];
	
	}
	***********************************/
	
	{
	
	int code_array[256];
	
	for(int i = 0; i<256; i++){
		code_array[i] = (0xf0f0^i);
	}
	
	for(int i = 0; i<256; i++)
		cout<<code_array[i]<<",";
		
	cout<<code_array['9']<<endl;
	cout<<code_array['r']<<endl;
	
	
	}
	
	
	return 0;
}

