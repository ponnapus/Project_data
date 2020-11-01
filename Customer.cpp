#include "Customer.h"
//#include <iostream>
//#include <string>
//#include<fstream>
//
//using namespace std;
Customer::Customer()
{
	
	name = "";
	pass = "";
	head_card = NULL;
	tail_card = NULL;
	count_c = 0;
	
}

void Customer::add(string name,string card_id,string type_card,string name_bank,string price_card,string cvv,string date){
	
	node_card *temp = new node_card();
		temp->cvv = cvv;
		temp->name_card = name;
		temp->name_bank = name_bank;
		temp->type_card = type_card;
		temp->num_card = card_id;
		temp->price_card = price_card;
		temp->date = date;
			
			if(head_card == NULL){
				head_card = temp;
				tail_card = temp;
				tail_card->next = NULL;
			}else{
				tail_card->next = temp;
				tail_card = temp;
				tail_card->next = NULL;
			}	 
			this->count_c++;
	
}
void Customer::check(string type){
	
	node_card *temp = new node_card();
		temp = head_card;
		cout << head_card;
		cout << "ppp00 " << endl;
		cout << temp->name_card;
	//	t = this->head_card;	
	//	for(int i=0;i<count_c;i++){
	//		cout << "l" << endl;
	//		if(t->type_card == type){
	//			cout << "oo" <<endl;	
	//		}
			temp = temp->next;
	//		cout << ";";
	//	}
	
}

void Customer::bank(){
	
	string name;
	string card_id;
	string type_card;
	string name_bank;
	string price_card;
	string cvv;
	string date;
	int choice,c;
	//string nameB;
	menu:
	cout << "======================== BANKING ======================" << endl;
	cout << "1. Input Informations " << endl;
	cout << "2. Revise Information " << endl;
	cout << "Enter : ";
	cin >> choice;
	
	if(choice == 1){
		cout << "============ CREDIT / DEBIT BANKING ==================" <<endl;
		cout << "Choose Name Banking : " << endl; 
		cout << "1. SCB "<< endl;
		cout << "2. KTB " << endl;
		cout << "3. TMB " << endl;
		cout << "4. Krungsri " << endl;
		cout << "5. Bangkok " << endl;
		cout << "6. GSB " << endl;
		cin >> c;
		switch(c){
			case 1:{
				name_bank = "SCB";
				break;
			}
			case 2:{
				name_bank = "KTB";
				break;
			}
			case 3:{
				name_bank = "TMB";
				break;
			}
			case 4:{
				name_bank = "Krungsri";
				break;
			}
			case 5:{
				name_bank = "Bangkok";
				break;
			}
			case 6:{
				name_bank = "GSB";
				break;
			}
		}//switch
	
		cout << "Input Your Name : ";
		cin >> name;
		cout << "Input Account Id : " ;
		cin >> card_id;
		cout << "Input Type card(debit/credit) : ";
		cin >> type_card; 
		cout << "Input Price In Card : ";
		cin >> price_card;
		cout << "Input CVV : ";
		cin >> cvv;
		cout << "Card Expiration Date : ";
		cin >> date;
		//add(name,card_id,type_card,name_bank,price_card,cvv,date);
		write_card_data(name,name_bank,card_id,type_card,price_card,cvv,date);
		cout << "success" << endl;
	}else if(choice == 2){
		cout << "Input Account Id : ";
		cin >> card_id;
				
	}else{
		cout << "Please Enter again !!!!!!!!!" << endl;
		goto menu;
	}
	
}
void Customer::write_card_data(string name,string name_b,string num,string type,string price,string cvv,string date){
	
	//node_card *temp = new node_card();
	ofstream myfile ("bank.txt",ios::app);
		if (myfile.is_open()){
						myfile<<name<<","<<name_b<<","<< num<<"," << type << ","
						<< price << "," << cvv <<","<< date << endl;	
		}else{
			cout << "!!! Not open !!!"<< endl;
		}
			myfile.close();	
	
}

int Customer::get_cus(){
	return count_c;
}

void Customer::read_cus(){
	node_card *temp = head_card;
	string name;
	string card_id;
	string type_card;
	string name_bank;
	string price_card;
	string cvv;
	string date;
			string line;
			string d = ",";	
 			ifstream myfile;
			myfile.open("bank.txt",ios::in);

			if(myfile.fail()){
				cout << "not open file" << endl; 
		
			}else{
				while(getline(myfile,line)){

					name = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					name_bank = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					card_id = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					type_card = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					price_card = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					cvv = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					date = line.substr(0,line.find(d));
				//	cout << "Z" << endl;
					add(name,card_id,type_card,name_bank,price_card,cvv,date);
				//	cout << "1" ;			
				}					

			  		myfile.close();
			}
}

/*void Customer::check(string type){
	
	node_card *temp = new node_card();
		//	t = head_card;
		cout << "ppp00 " << endl;
		cout << temp->name_card;
	//	t = this->head_card;	
	//	for(int i=0;i<count_c;i++){
	//		cout << "l" << endl;
	//		if(t->type_card == type){
	//			cout << "oo" <<endl;	
	//		}
	//		t = t->next;
	//		cout << ";";
	//	}
	
}*/





