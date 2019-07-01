#ifndef  NOD_H
#define NOD_H




#include<iostream>
using namespace std;

class Node {

private:
	int data;
	Node* next;

public:

	Node();
	Node(int data);
	int getdata();
	void setdata(int);
	Node* getnext();
	void setnext(Node*);



};
#endif 