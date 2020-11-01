#include "Installment.h"

Installment::Installment(){
//	count_c = count;
	//head_c = NULL;
	//tail_c = 
}

void Installment::payment(){
	
//		node_card *t = new node_card();
	//node_card *t = head_card;
	int choice;
	string n;
	cout << "============ Payment Method =================" << endl;
	cout << "1. Debit Card  " << endl;
	cout << "2. Cradit Card " << endl;
	cout << endl;
	cout << "Please Enter Your Choice : " ;
	cin >> choice;
	if(choice == 1){
		
		cout << "g" << endl;
		n = "debit";
		//check(n);

	}else if(choice == 2){
		n = "credit";
		cout <<"cc" << endl; 
		//t = head_card;
//		for(int i=0;i<count_c;i++){
//			if(t->type_card == "credit"){
//				cout << "pp" << endl;
//			}
//			t = t->next;
//		}
	}
	//cout << "'" << endl;
	
	obj.check(n);
	cout << "f" << endl;
	
	
}

void Installment::install(){
	
}
