#ifndef NODE_CARD_H
#define NODE_CARD_H
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Customer.h"
#include "Output.h"

using namespace std;

class node_card
{
	public:
		string cvv;
		string name_card;
		string name_bank;
		string type_card;
		string num_card;
		string price_card;
		string day_end;
		node_card *link;
		
		node_card();
	protected:
};

#endif
