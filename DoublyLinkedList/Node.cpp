#include "pch.h"
#include "node.h"

Node::Node(int data)
{
	this->data = data;
	this->next = this->prev = NULL;
}

void Node::setData(int data)
{
	this->data = data;
}

void Node::setPrev(Node * prev)
{
	this->prev = prev;
}

void Node::setNext(Node * next)
{
	this->next = next;
}

int Node::getData()
{
	return this->data;
}

Node * Node::getPrev()
{
	return this->prev;
}

Node * Node::getNext()
{
	return this->next;
}

