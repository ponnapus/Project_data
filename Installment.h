#ifndef INSTALLMENT_H
#define INSTALLMENT_H

#include "Customer.h"

//using namespace std;

class Installment {//: public Customer{
	public:
		int count_c;
		Customer obj;
			//node_card *tep = new node_card();
			//node_card *head_c;
			//node_card *tail_c;
		
		Installment();
		void payment();
		void install();
		
	protected:
};

#endif
