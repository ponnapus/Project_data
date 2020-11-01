#ifndef CATEGORI_H
#define CATEGORI_H
#include "node_categori.h"
//#include <iostream>
//#include <string>
//#include<fstream>

//using namespace std;
class categori
{
	public:
		node_categori *head;
		node_categori *tail;
		node_categori obj;
		int count;
		
		categori();
		void read_categori();
		void look_categori();
		int get_cat();
		void detail(string name);
		void show();
		void menu_cat();
		void add_categori(string num,string name,string mo,string p,string b,string de);

	protected:
};

#endif
