#include"Node.h"
#include"Queue.h"
#include<conio.h>
int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.display();
	cout << "\n dequeue";
	q.dequeue();
	q.dequeue();
	q.display();
	_getch();
	return 0;
}