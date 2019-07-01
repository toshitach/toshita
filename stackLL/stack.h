#ifndef STK_H
#define STK_H

#include<iostream>
using namespace std;
#include"node.h"

class stack {

private:

	Node *top;

public:
	stack();
	bool push(int);
	bool pop();
	int peek();
	bool display();
};

#endif 