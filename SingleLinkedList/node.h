#pragma once
#include<iostream>
using namespace std;

class Node
{
private:
	int data;
	Node * next;
public:
	Node(int data);
	void setData(int data);
	void setNext(Node * name);
	int getData() const;
	Node * getNext() const;
};

