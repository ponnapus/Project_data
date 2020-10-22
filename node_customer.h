#ifndef NODE_CUSTOMER_H
#define NODE_CUSTOMER_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
class node_customer
{
	public:
	
		string username;
		string password;
		string card;
		string cvv;
		node_customer *link_cus;
		node_customer();
	protected:
};

#endif
