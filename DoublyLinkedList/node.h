#include<iostream>
using namespace std;
class Node
{
private:
	int data;
	Node *prev, *next;
public:
	Node(int data);
	void setData(int data);
	void setPrev(Node * prev);
	void setNext(Node * next);
	int getData();
	Node * getPrev();
	Node *getNext();
};

