#include"Queue.h"
#include"Node.h"
#include<conio.h>
Queue::Queue()
{
	this->front = 0;
	this->rear = 0;
}


bool Queue::enqueue(int data)
{
	Node  *newNode = new Node(data);

	if (newNode == NULL) {
		return false;
	}

	if (rear == NULL)
	{
		this->front = this->rear = newNode;
		this->rear = newNode;
	}

	this->rear->setnext(newNode);
	this->rear = newNode;
	return true;
}

bool Queue::dequeue()
{
	if (front == NULL) {
		return false;
	}

	Node* del=this->front;
	this->front = this->front->getnext();
	delete[] del;
	if (this->front == NULL) {
	
		this->rear == NULL;
	}
	return true;

}
void Queue::display()
{
	Node* temp;
	temp = this->front;
	while (temp != NULL)
	{
	
		cout << temp->getdata() << " ";
		temp = temp->getnext();
	}

}