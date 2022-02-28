/***********************************************************
     Copyright 2003 Rick Miller - Pulp Free Press 
     
     This source code accompanies the text C++ For Artists
     and is provided for instructional purposes only. No 
     warranty concerning the quality of the code is expressed
     or implied.

	 You are free to use this code in your programs so long
	 as this copyright notice is included in its entirety.

**********************************************************/

#ifndef		__Person_H
#define		__Person_H


class	Person{
	public:
		Person(char*  _f_name = "John", char*  _m_name = "M", 
			   char* _l_name = "Doe", char _sex = 'M', int _age = 18);
		~Person();
		Person(Person&  person);
		Person&	operator=(Person& rhs);
		void    setFirstName(char* f_name);
		void    setMiddleName(char* m_name);
		void    setLastName(char* l_name);
		void    setAge(int age);
		void    setSex(char sex);
		char*   getFullName();
		char*   getFirstName();
		char*   getMiddleName();
		char*   getLastName();
		char    getSex();
		int	    getAge();
	 
	private:
		char* 	f_name;
		char* 	l_name;
		char* 	m_name;
		char 	sex;
		int		age;
		char*   full_name;
		bool    name_changed;
		
};
#endif
