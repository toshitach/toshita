
#include"emp.h"

Employee::Employee()
{
	this->id = 0;
	this->sal = 0;
}

int Employee::getid()
{
	return this->id;
}
void Employee::setid(int id)
{
	this->id = id;
}
int Employee::getsal()
{
	return this->sal;
}
void Employee::setsal(int sal)
{
	this->sal = sal;
}

void Employee::accept()
{
	cout << "\nEnter ID:";
	cin >> this->id;

	cout << "\nEnter salary:";
	cin >> this->sal;

}

void Employee::display()
{
	cout << "\nId is:" << id
		<< "\nsalary is:" << sal;

}
