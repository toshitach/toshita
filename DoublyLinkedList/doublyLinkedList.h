#pragma once
#include"node.h"
class DoublyLinkedList
{
private :
	Node *head;
public:
	DoublyLinkedList();
	~DoublyLinkedList();
	bool insertData(int data);
	bool insertAtFirstPos(int data);
	bool insertAtPos(int data, int pos);
	bool removeByvalue(int data);
	bool removeByPos(int pos);
	void PrintData();
};

