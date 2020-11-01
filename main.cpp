#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Customer.h"
#include "Output.h"
#include "Employee.h"
#include "categori.h"
#include "Installment.h"


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Employee obj;
	Customer obj_cas;
	Installment obj_In;
	string username,password,con_password;
	Output obj1;
	categori obj_cat;
	int choice,choice1;
	string con;
	string no;
	string yes;
	int cp;
	
	obj_cas.read_cus();
	obj_cas.check();
	//cout << obj_cas.get_cus();
	//	obj_cas.check("credit");
			obj1.read_file();	
			obj_cat.read_categori();
	menu: 
	//	obj_cat.look_categori();
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
			
			order:	
				obj1.show_category();
				obj_cat.menu_cat();
			choice:
				cout << "1. Next to payment " << endl;
				cout << "2. Next to installment  " << endl; 
				cout << "3. View other products  " << endl;
				cout << "4. Return to MAIN Menu " << endl;
				cout << "ENTER : " ;		
				cin >> no;
				if(no == "1"){
					//obj_In.payment();
					obj_cas.check();
					goto menu;
				}else
				if(no == "2"){
					
				}else
				if(no =="3"){
					goto order;
				}else
				if(no == "4"){
					goto menu;
				}else{
					cout << " !!! Plese Enter Agian !!!"<< endl;
					goto choice;
				}
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
										yes = "y";
										
								}else if(con =="No"){
									
									goto regis;
								
								}
							
						}else if(choice1 == 2){
							if(obj.login(username,password)==true){
								cout<<setw(38) << " " <<"!!!Login successed!!!"<<endl;
								yes = "y";
							
							}else{
								cout<<setw(38) << " " <<"!!!Username or Password not correct!!!"<<endl;
								goto regis;
							}
						}
						
						if(yes == "y"){
							cout << "1. Banking"<< endl;
							cout << "2. normal " << endl;
							cin >> cp; 
							if(cp == 1){
							obj1.out_bank();
							cout<< "data update" << endl;
							//goto menu;
							 cout << "thank you for login" << endl;
							}else if(cp == 2){
								
							}
						}
						
				
				break;
			}
			case 3:{
			
				break;
			}
		}
	return 0;
}
