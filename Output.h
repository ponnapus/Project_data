#ifndef OUTPUT_H
#define OUTPUT_H
//#include <iostream>
//#include <string>
//#include <fstream>
#include "categori.h"
//#include "categori.h"
#include "Customer.h"

//using namespace std;
class Output
{
	protected:
	public:		
		Customer p;
		node_categori obj;
		int count_c;
		categori obj_cat;
		Output();
		void read_file();
		void show_category();
		void menu();
		void out_bank();
	//protected:
};

#endif
