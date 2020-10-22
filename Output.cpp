#include "Output.h"
#include <iostream>
#include <string>
#include<fstream>

using namespace std;
Output::Output()
{
	
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
	
	int sum;
	cout << "\t=== CATEGORY ===" << endl;
	cout << "\t1.Refrigerator " << endl;
	cout << "\t2.Washing machine " <<endl;
	cout << "\t3.TV" << endl;
	cout << "\t4.Air Conditioner" << endl;
	cout << "\t5.Laptop" << endl;
	cout << "\t6.Water Heater" << endl;
	cout << "\t7.Strainer" << endl;
	cout << "\t8.Computer" << endl;
	cout << "\t9.Vacum Cleaner" << endl;
	cout << "\t10.Fan" << endl;
	cout << "\t11. View Your Profile" << endl;
	do{
		
		cout << "Please Enter category your want : " ;
			cin>> sum;
			
	}while(sum<1||sum>11);
	
		switch(sum){
			case 1:{
				
				break;
			}
			case 2:{
				
				break;
			}
		}
	
	
}

