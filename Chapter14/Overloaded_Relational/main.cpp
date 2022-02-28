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
using namespace std;  
#include "person.h"

int main(){	
	
	/********************************
	  variables
	 *******************************/
	bool keep_going = true;
	int number = 0;
	char fname[30];
	char mname[30];
	char lname[30];
	int age;
	char sex;
	Person **people;
	
	/*******************************
	 get number of people to enter
	 ******************************/
	cout<<"Enter number of people: ";
	cin>>number;
	cout<<endl;
	
	/*****************************
	 create people array
	 ****************************/
	 people = new Person*[number];
	
	/*****************************
	 enter people names
	 ****************************/
	for(int i=0; i<number; i++){
	
	 cout<<"Enter first name: ";
	 cin>>fname;
	 cout<<"Enter middle name: ";
	 cin>>mname;
	 cout<<"Enter last name: ";
	 cin>>lname;
	 cout<<"Enter sex M/F: ";
	 cin>>sex;
	 cout<<"Enter age: ";
	 cin>>age;
	 cout<<endl<<endl;
	 
	 people[i] = new Person(fname, mname, lname, sex, age);
	}
	
	
	/******************************
	 create file to save people 
	 ******************************/
	ofstream outfile("people.txt");
	
	for(int i=0; i<number; i++)
		outfile<<(*people[i]);
		
	outfile.close();
	
	
	/******************************
	 open file and read people info
	 ****************************/
	ifstream infile("people.txt");
	
	
	for(int i=0; i<number; i++)
		infile>>(*people[i]);
		
	infile.close();
	
	
	/******************************
	 print people to screen
	 *****************************/
		
	for(int i=0; i<number; i++)
		cout<<(*people[i]);	
		
	for(int i=0; i<number; i++)
		cout<<people[i]->getFullName()<<endl;	
		
		
	/*******************************
	  Test relational operators
	*******************************/
	if((*people[0]) < (*people[1]))
		cout<<people[0]->getFirstName()<<" is younger than "<<people[1]->getFirstName()<<endl;
		else
		 cout<<people[1]->getFirstName()<<" is younger than "<<people[0]->getFirstName()<<endl;
	
	
	/******************************
	 delete pointers
	 ****************************/
	for(int i=0; i<number; i++)
		delete people[i];
		
	delete[] people;
		
	return 0;
}
