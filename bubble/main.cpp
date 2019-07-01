#include <iostream>
#include<conio.h>
#include"emp.h"
int main()
{
	Employee e[10];
	for (int i = 0; i < 4; i++) {
		e[i].accept();
	}
		for (int i = 0; i < 4; i++) {

			for (int j = 0; j < 3; j++) {

				if (e[j + 1].getid() < e[j].getid()) {
					int temp = e[j + 1].getid();
					e[j + 1].setid(e[j].getid());
					e[j].setid(temp);


					temp = e[j + 1].getsal();
					e[j + 1].setsal(e[j].getsal());
					e[j].setsal(temp);

				}
			}
		
			}

			for (int i = 0; i < 4; i++) {
				e[i].display();
			}
			_getch();
			return 0;
		}
	
