#pragma once
#include<iostream>
using namespace std;
#include"node.h"
class CLinkedList
{
private:
	Node * head;
public:
	CLinkedList();
	~CLinkedList();
	bool insertData(int data);
	bool insertAtFirstPos(int data);
	bool insertAtPos(int data,int pos);
	bool removeByvalue(int data);
	bool removeByPos(int pos);
	void reverse();
	void PrintData();
};

