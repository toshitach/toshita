
#include"Stack_header.h"
#include<conio.h>

int main()
{
	char ch;
	stack s;
	do
	{
		
		int choice;
		cout << "\nEnter Your Choice";
		cout << "\n1.Puch \n2.Pop \n3.Display \n4.Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			int no;
			cout << "Enter No :: ";
			cin >> no;
			s.push(no);
			break;

		case 2:
			s.pop();
			break;

		case 3:
			s.Display();
			break;

		case 4:
			exit(0);
			break;
		}
		cout << "\nEnter 'y' to Continue.......";
		cin >> ch;
	} while (ch == 'y');
	
	_getch();
	return 0;
}