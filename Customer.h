#ifndef CLUSTOMER_H
#define CLUSTOMER_H
#include "node_card.h"
//#include <iostream>
//#include <string>
//#include <fstream>
//
//using namespace std;
class Customer{
	public:
		string name,pass;
		int count_c;
		node_card *head_card;
		node_card *tail_card;
		
		Customer();
		int get_cus();
		void bank();
		void read_cus();
		void check(string type);
		void add(string name,string card_id,string type_card,string name_bank,string price_card,string cvv,string date);
		void write_card_data(string name,string name_b,string num,string type,string price,string cvv,string date);
	protected:
	
};

#endif
