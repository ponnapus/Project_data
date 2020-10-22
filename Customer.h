#ifndef CLUSTOMER_H
#define CLUSTOMER_H
#include <iostream>
#include <string>

using namespace std;
class Customer
{
	public:
		string name,pass,count;
		Customer();
		void regis(string username,string password);
		bool login(string username,string password);
		bool checkname(string name);
		
	protected:
	
};

#endif
