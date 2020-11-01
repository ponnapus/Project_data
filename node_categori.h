#ifndef NODE_CATEGORI_H
#define NODE_CATEGORI_H
#include <iostream>
#include <string>
#include<fstream>

using namespace std;
class node_categori
{
	public:
		string no_goods;
		string name_goods;
		string model;
		string price;
		string brand;
		string detail;
		node_categori *link;
		
	//	node_categori *head;
	//	node_categori *tail;
		int count;
		node_categori();
	//	void add_categori(string num,string name,string mo,string p,string b,string de);
		
	protected:
};

#endif
