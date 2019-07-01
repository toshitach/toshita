
#include<iostream>
using namespace std;


class Employee {

protected:
	int id;
	int sal;


public:

	Employee();
	int getid();
	void setid(int);
	int getsal();
	void setsal(int);
	void accept();
	void display();
};