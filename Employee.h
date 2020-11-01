#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include<fstream>

using namespace std;
class Employee
{
	public: 
		Employee();
		string name,pass,count;
		void regis(string username,string password);
		bool login(string username,string password);
		bool checkname(string name);
		void show_menu();
	protected:
};

#endif
