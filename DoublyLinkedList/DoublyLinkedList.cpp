
#include "pch.h"
#include <iostream>
#include "doublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList()
{
	this->head = NULL;
}


DoublyLinkedList::~DoublyLinkedList()
{
	Node *del;
	while (this->head != NULL)
	{
		del = this->head;
		this->head = this->head->getNext();
		delete del;
	}
}

bool DoublyLinkedList::insertData(int data)
{
	Node * newNode = new Node(data);

	if (newNode == NULL)
		return false;

	if (this->head == NULL)
	{
		head = newNode;
		return true;
	}

	Node * temp = head;
	while (temp->getNext() != NULL)
	{
		temp = temp->getNext();
	}
	temp->setNext(newNode);
	newNode->setPrev(temp);
	return true;
}

bool DoublyLinkedList::insertAtFirstPos(int data)
{
	Node * newNode = new Node(data);
	newNode->setNext(head);
	this->head = newNode;
	return true;
}

bool DoublyLinkedList::insertAtPos(int data, int pos)
{
	if (pos <= 0)
		return false;

	Node * newNode = new Node(data);

	if (newNode == NULL)
		return 0;

	if (pos == 1)
	{
		newNode->setNext(this->head);
		this->head->setPrev(newNode);
		this->head = newNode;
		return true;
	}

	Node * prev = head;
	for (int i = 0; i < pos - 1; i++)
	{
		prev = prev->getNext();
		if (prev == NULL)
		{
			delete newNode;
			return false;
		}
	}

	newNode->setPrev(prev);
	if (prev->getNext() != NULL)
	{
		newNode->setNext(prev->getNext());
		prev->getNext()->setNext(newNode);
	}
	prev->setNext(newNode);
	return true;
}

bool DoublyLinkedList::removeByvalue(int data)
{
	if (this->head == NULL)
		return false;

	if (data == this->head->getData())
	{
		Node * del = head;

		this->head = this->head->getNext();
		if (this->head == NULL)
		{
			this->head->setPrev(NULL);
		}
		delete del;
		return true;
	}

	Node *del = head;

	while (del->getData() != data)
	{
		del = del->getNext();
		if (del == NULL)
		{
			return false;
		}
	}
	del->getPrev()->setNext(del->getNext());
	if (del->getNext())
	{
		del->getNext()->setPrev(del->getPrev());
	}
	delete del;
	return true;
}

bool DoublyLinkedList::removeByPos(int pos)
{
	if (this->head == NULL || pos <= 0)
		return false;

	if (pos == 1)
	{
		Node * del = this->head;
		this->head = this->head->getNext();
		if (this->head == NULL)
		{
			this->head->setPrev(NULL);
		}
		delete del;
		return true;
	}

	Node * del = head;
	for (int i = 1; i < pos; i++)
	{
		del = del->getNext();
		if (del == NULL)
		{
			return false;
		}
	}
	del->getPrev()->setNext(del->getNext());
	if(del->getNext())
		del->getNext()->setPrev(del->getPrev());
	
	delete del;
	return true;
}

void DoublyLinkedList::PrintData()
{
	Node * temp = head;
	while (temp != NULL)
	{
		cout << temp->getData() << " ";
		temp = temp->getNext();
	}
}
