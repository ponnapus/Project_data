#include "Customer.h"
#include <iostream>
#include <string>
#include<fstream>

using namespace std;
Customer::Customer()
{
	
}

void Customer::regis(string username,string password){
		ofstream myfile ("datacustomer.txt",ios::app);
						if (myfile.is_open()){
						myfile <<username<<","<<password;
						myfile<<endl;	
						}
			myfile.close();	
}//regis

bool Customer::login(string username,string password){
		string line;
		ifstream custumer("datacustomer.txt", ios::in);
				if(custumer.is_open()){
					while( getline(custumer,line) ) {
						name=line.substr(0,line.find(","));
						line=line.erase(0,line.find(",")+1);
						pass=line;
						if(name==username&&pass==password){
							count="1";
							break;
						}
						else if(name!=username&&pass!=password){
							count="0";
						}
					}
				}
		custumer.close();
	if(count=="1"){
			return true;
		}
		else if(count=="0"){
			return false;
		}
}//login

bool Customer::checkname(string name){
	string line,username;
	int check;
	ifstream custumer("datacustomer.txt", ios::in);
				if(custumer.is_open()){
					while( getline(custumer, line) ) {
						username=line.substr(0,line.find(","));
						cout<<username<<endl;
						if(name==username){
							check=1;
							break;
						}
						else{
							check=0;
						}
							
					}
				}
	custumer.close();
	if(check==1){
		return false;
	}
	else if(check==0){
		return true;	
	}
}//checkname
