#include "Output.h"
//#include <iostream>
//#include <string>
//#include<fstream>
//
//using namespace std;
Output::Output()
{
	count_c = obj.count;
}


void Output::read_file(){
			string line;
 			ifstream myfile;
			myfile.open("installment.txt",ios::in);

			if(myfile.fail()){
				cout << "not open file" << endl; 
		
			}else{
				while(getline(myfile,line)){

					cout << line << endl;;			
	
				}
			  		myfile.close();
			}
}

void Output::show_category(){
	
	node_categori *temp = new node_categori();
	//count = obj.count;
	int sum;
	cout << "\t=== CATEGORY ===" << endl;
	cout << "\t1.Refrigerator " << endl;
	cout << "\t2.Washing machine " <<endl;
	cout << "\t3.TV" << endl;
	cout << "\t4.Air Conditioner" << endl;
	cout << "\t5.Laptop" << endl;
	cout << "\t6.Water Heater" << endl;
	cout << "\t7.Speaker" << endl;
	cout << "\t8.PC Desktop" << endl;
	cout << "\t9.Vacum Cleaner" << endl;
	cout << "\t10.Fan" << endl;
	
}


void Output::menu(){
	
	
	
}

void Output::out_bank(){
	string user;
	string pass;
	cout << " ============= For Banking =============" << endl;
	cout << "Enter Username : ";//admin
	cin >> user;
	cout << "Enter Password : "; //admin
	cin >> pass;
	
	if(user == "admin" && pass =="admin"){
		p.bank();
		//cus.write_card_data();
		
	}else{
		cout << "Cannot Login !!!!!!!!!! " << endl;
		cout << "=== Please Try Again ===" << endl;
	}
		
}
