#ifndef QUE_h
#define QUE_h



#include"Node.h"
#include<iostream>
using namespace std;

class Queue
{
protected:

	Node *front, *rear;

public:

	Queue();

	bool enqueue(int);
	bool dequeue();
	void display();
};

#endif

