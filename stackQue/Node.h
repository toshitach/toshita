#ifndef NOD_H
#define NOD_H



#include<stdio.h>
using namespace std;

class Node { 

protected:

	int data;
	Node *next;

public:
	Node();
	Node(int data);
	int getdata();
	void setdata(int data);
	Node* getnext();
	void setnext(Node*);

};
#endif 

