#include "categori.h"
//#include "node_categori.h"
//#include <iostream>
//#include <string>
//#include<fstream>
//
//using namespace std;
categori::categori()
{

	head = NULL;
	tail = NULL;
	count = 0;
	
}



void categori::read_categori(){
	node_categori *temp = head;
	string num;
	string name;
	string mo;
	string p;
	string b;
	string de;
			string line;
			string d = ",";	
 			ifstream myfile;
			myfile.open("ponsabuy.txt",ios::in);

			if(myfile.fail()){
				cout << "not open file" << endl; 
		
			}else{
				while(getline(myfile,line)){

					num = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					name = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					mo = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					p = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					b = line.substr(0,line.find(d));
						line.erase(0,line.find(d)+1);
					de = line.substr(0,line.find(d));
					//	line.erase(0,line.find(d)+1);
				//	cout << "Z" << endl;
					add_categori(num,name,mo,p,b,de);
				//	cout << "1" ;			
				}					

			  		myfile.close();
			}
}

void categori::add_categori(string num,string name,string mo,string p,string b,string de){
	
	node_categori *temp = new node_categori();
		temp->no_goods = num;
		temp->name_goods = name;
		temp->model = mo;
		temp->price = p;
		temp->brand = b;
		temp->detail = de;
			
			if(head == NULL){
				head = temp;
				tail = temp;
				tail->link = NULL;
			}else{
				tail->link = temp;
				tail = temp;
				tail->link = NULL;
			}	 
			this->count++;
	
}

int categori::get_cat(){
	return count;
}

void categori::menu_cat(){
	int sum;
	string name;
	node_categori *temp = head;
	
	do{
		
		cout << "Please Enter category your want : " ;
			cin>> sum;
			
	}while(sum<1||sum>10);
//	cout << "ll";
	
		switch(sum){
			case 1:{
				name = "Refrigerator";
				detail(name);
				break;
			}
			case 2:{
				name = "Washing machine";
				detail(name);
				break;
			}
			case 3:{
				name = "TV";
				detail(name);
				break;
			}
			case 4:{
				name = "Air conditioner";
				detail(name);
				break;
			}
			case 5:{
				name = "Laptop";
				detail(name);
				break;
			}
			case 6:{
				name = "Water heater";
				detail(name);
				break;
			}
			case 7:{
				name = "Speaker";
				detail(name);
				break;
			}
			case 8:{
				name = "PC";
				detail(name);
				break;
			}
			case 9:{
				name = "Vacuum Cleaner";
				detail(name);
				break;
			}
			case 10:{
				name = "Fan";
				detail(name);
				break;
			}
		}
	
}

void categori::detail(string name){
	node_categori *temp = head;
	temp = head;
				for(int i = 0;i<count ;i++){
					
					if(temp->name_goods == name ){
						
					cout << "PRODUCT CODE   ::  " <<temp->no_goods << endl;
					cout << "BRAND          ::  " <<temp->brand << endl;
					cout << "MODEL          ::  " << temp->model << endl;
					cout << "DETAIL         ::  " << temp->detail << endl;
					cout << "PRODUCT PRICE  ::  " << temp->price << "   BATH  " << endl; 
					cout << "========================================" << endl;
					
					}
					temp = temp->link;
				}
				
} 




