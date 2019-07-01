#include"stack.h"

stack::stack()
{
	this->top = top;
}
bool stack::push(int data)
{
	Node* newNode = new Node(data);
	if (newNode == NULL) {
		return false;
	}

	newNode->setdata(data);
	newNode->setnext(top);
	top = newNode;
	return true;

}
bool stack::pop()
{
	Node *del = top;
	if (top == NULL) {
		return false;
	}
	top = del->getnext();
	delete[] del;
	return true;

}
int stack::peek() {

	return top->getdata();

}

bool stack::display()
{
	Node* temp = top;

	while (temp != NULL) {
	
		cout << temp->getdata() << " ";
		temp = temp->getnext();
	
	}

	return true;

}