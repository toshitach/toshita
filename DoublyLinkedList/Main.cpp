#include "pch.h"
#include"doublyLinkedList.h"
#include<conio.h>

int main()
{
	DoublyLinkedList d1;
	d1.insertData(10);
	d1.insertData(20);
	d1.insertData(30);
	d1.insertData(40);
	d1.insertData(50);
	d1.insertData(60);
	d1.insertAtFirstPos(100);
	d1.insertAtPos(500, 7);
	d1.removeByPos(5);
	d1.removeByvalue(50);
	d1.PrintData();
	_getch();
	return 0;
}