#include "pch.h"
#include "node.h"
Node::Node(int data)
{
	this->data = data;
	this->next = NULL;
}

void Node::setData(int data)
{
	this->data = data;
}

void Node::setNext(Node * next)
{
	this->next = next;
}

int Node::getData() const
{
	return this->data;
}

Node * Node::getNext() const 
{
	return this->next;
}
