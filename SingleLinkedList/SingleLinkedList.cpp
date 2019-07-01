#include "pch.h"
#include"linkedList.h"
#include <iostream>
#include<conio.h>
#include"node.h"

int main()
{
	CLinkedList c1;
	c1.insertData(30);
	c1.insertData(10);
	c1.insertData(20);
	c1.insertData(30);
	c1.insertData(40);
	c1.insertData(50);
	c1.insertData(500);
	c1.insertData(550);
	c1.insertAtFirstPos(100);
	c1.insertAtPos(200, 5);
	c1.removeByvalue(200);
	c1.removeByPos(6);
	c1.reverse();
	c1.PrintData();

	_getch();

	return 0;
}

