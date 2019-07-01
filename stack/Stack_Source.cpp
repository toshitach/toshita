#include"Stack_header.h"
#include<conio.h>

stack::stack()
{
	top = -1;
}
void stack::push(int no)
{
	if (isFull())
	{
		cout << "Stack is Full";
	}
	else
	{
		top = top + 1;
		arr[top] = no;
	}
}
void stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack is Empty";
	}
	else
	{
		top = top - 1;
		arr[top];
	}

}
bool stack::isEmpty()
{
	return top == -1;
}
bool stack::isFull()
{
	return top == SIZE - 1;
}
void stack::Display()
{
	if (isEmpty())
	{
		cout << "Stack is Empty";
	}
	else
	{
		for (int i = top; i >= 0; i--)
		{
			cout << "\n" << arr[i];
		}
	}

}