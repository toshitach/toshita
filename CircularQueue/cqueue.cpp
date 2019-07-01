#include "pch.h"
#include "cqueue.h"


CQueue::CQueue()
{
	rear = 0;
	front = 0;
}
bool CQueue::isEmpty()
{
	return (rear == 0 && front == 0);
}
bool CQueue::isFull()
{
	if ((front == -1 && rear == (SIZE - 1)) || ((rear + 1) % SIZE == front))
		return true;
	return false;
}

void CQueue::insert(int no)
{
	if (rear == 0 && front == 0)
	{
		arr[rear] = no;
		rear++;
	}
	else if (rear<=SIZE-1) 
	{
		arr[rear] = no;
		rear++;
	}
	else
	{
		cout << "CQueue is Full";
	}
}
void CQueue::remove()
{
	if (isEmpty()) 
	{ 
		cout << "CQueue is Empty";
	}
	else if (rear == SIZE -1)
	{
		arr[rear];
	}
	else
	{
		front++;
	}
	
}
void CQueue::PrintData()
{
	for (int i = front; i <= rear; i++)
	{
		cout<<"\n"<<arr[i];
	}
}
