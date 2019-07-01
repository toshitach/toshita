#include "pch.h"
#include "linkedList.h"


CLinkedList::CLinkedList()
{
	this->head = NULL;
}


CLinkedList::~CLinkedList()
{
	Node * del;
	while (this->head != NULL)
	{
		del = this->head;
		this->head = this->head->getNext();
		delete del;
	}
}

bool CLinkedList::insertData(int data)
{
	Node * newNode = new Node(data);
	if (newNode == NULL)
	{
		return false;
	}
	if (head == NULL)
	{
		this->head = newNode;
		return true;
	}
	Node * last = head;
	while (last->getNext() != NULL)
	{
		last = last->getNext();
	}
	last->setNext(newNode);
	return true;
}

bool CLinkedList::insertAtFirstPos(int data)
{
	Node * newNode = new Node(data);
	newNode->setNext(this->head);
	this->head = newNode;
	return true;
}

bool CLinkedList::insertAtPos(int data,int pos)
{
	if (pos <= 0)
		return false;

	Node * newNode = new Node(data);
	if (newNode == NULL)
	{
		return false;
	}

	if (pos == 1)
	{
		newNode->setNext(this->head);
		this->head = newNode;
		return true;
	}

	Node * pre = head;
	for (int i = 1; i < pos - 1; i++)
	{
		pre = pre->getNext();
		if (pre == NULL)
		{
			delete newNode;
			return false;
		}
	}
	newNode->setNext(pre->getNext());
	pre->setNext(newNode);

	return true;
}

bool CLinkedList::removeByvalue(int data)
{
	if (this->head == NULL)
		return false;
	if (data == this->head->getData())
	{
		Node * del = head;
		this->head = this->head->getNext();
		delete del;
		return true;
	}

	Node *del, *pre;
	pre = del = head;
	while (del->getData() != data)
	{
		pre = del;
		del = del->getNext();
		if (del == NULL)
		{
			return false;
		}
	}
	pre->setNext(del->getNext());
	delete del;

	return true;
}

bool CLinkedList::removeByPos(int pos)
{
	if (this->head == NULL || pos <= 0)
		return false;

	if (pos == 1)
	{
		Node * del = this->head;
		this->head = this->head->getNext();
		delete del;
		return true;
	}

	Node * pre = head;
	for (int i = 1; i < pos - 1; i++)
	{
		pre = pre->getNext();
		if (pre == NULL)
		{
			return false;
		}
	}
	if (pre->getNext() == NULL)
	{
		return false;
	}

	Node * del = pre->getNext();
	pre->setNext(del->getNext());

	delete del;


	return true;
}

void CLinkedList::reverse()
{
	if (this->head == NULL || this->head->getNext() == NULL)
		return;
	Node *pre, *current, *next = NULL;
	pre = this->head;
	current = this->head->getNext();
	while (current != NULL)
	{
		next = current->getNext();
		current->setNext(pre);
		pre = current;
		current = next;
	}
	this->head->setNext(NULL);
	this->head = pre;
}

void CLinkedList::PrintData()
{
	Node * temp = head;
	while (temp != NULL)
	{
		cout << temp->getData() << " ";
		temp = temp->getNext();
	}
}
