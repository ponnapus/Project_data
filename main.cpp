#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Customer.h"
#include "Output.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Customer obj;
	string username,password,con_password;
	Output obj1;
	int choice,choice1;
	string con;
			obj1.read_file();
	menu: 
		
		cout << setw(50) << " " << "========= MENU =========" << endl;
		cout << setw(50) << " " << "1.Clustomer" << endl;
		cout << setw(50) << " " << "2.Employee" << endl;
		cout << setw(50) << " " << "3.Exit" << endl;
		cout << setw(50) << " " << "=========================" << endl;
		do{
			
			cout << setw(60)<< "Enter : ";
			cin >> choice;
			
		}while((choice!=1)&&(choice!=2)&&(choice!=3));
		
		switch(choice){
			case 1:{
				obj1.show_category();
						
				break;
			}
			case 2:{
				regis:
					cout << setw(38) << " " << "================== CUSTOMER INSTALL===================" << endl;
					cout << setw(38) << " " << "1.Register" <<endl;
					cout << setw(38) << " " << "2.Log-In" << endl;
					cout << setw(38) << " " << "=======================================================" << endl;
					cout << setw(50) << "Enter : ";
						cin >> choice1;
					cout << endl;
					cout << setw(38) << " " << "=======================================================" << endl;
					cout << setw(38) << "Enter Your Username : " ;
						cin >> username;
					cout << setw(38) << "Enter Your Password : " ;
						cin >> password;
					cout << setw(38) << " " << "=======================================================" << endl;


						if(choice1 == 1){
							
							if(obj.checkname(username)==false){
								cout<<setw(38) << "!!!This name is already used!!!"<<endl;
								goto regis;
							}
				
							cout<<setw(38) << "Confirm password : ";
								cin>>con_password;
				
							if(password!=con_password){
								cout<<setw(38) << "!!!Confirmpassword not correct!!! "<<endl;
							goto regis;
							}
							obj.regis(username,password);
								
								
							//login		
								cout <<setw(38) << " " << "next to Login?(Yes/No)"<<  endl;
								do{
									cout <<setw(38) << " " << "Enter : " ;
										cin >> con;
								}while((con!="Yes")&&(con != "No"));
								if(con == "Yes"){
								
										cout<<setw(38) << " " <<"!!!Login successed!!!"<<endl;
										
										
								}else if(con =="No"){
									
									goto regis;
								
								}
							
						}else if(choice1 == 2){
							if(obj.login(username,password)==true){
								cout<<setw(38) << " " <<"!!!Login successed!!!"<<endl;
								//process
								
								
							}else{
								cout<<setw(38) << " " <<"!!!Username or Password not correct!!!"<<endl;
								goto regis;
							}
						}
				
				break;
			}
			case 3:{
				
				goto menu;
				break;
			}
		}
	return 0;
}
