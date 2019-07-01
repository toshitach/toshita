#include"node.h"
#include"stack.h"
#include<conio.h>

int main()
{
	stack s1;
	s1.push(20);
	s1.push(10);
	s1.push(50);
	s1.push(80);

	s1.display();
	cout << "\npop:";
	s1.pop();
	s1.display();
	cout << "\npeek:";
	s1.peek();
	s1.display();
	_getch();
	return 0;
	
}