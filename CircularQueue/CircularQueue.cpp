#include "pch.h"
#include <iostream>
#include"cqueue.h"
int main()
{
	CQueue c1;
	c1.insert(10);
	c1.insert(20);
	c1.insert(30);
	c1.remove();
	c1.insert(40);
	c1.remove();
	c1.remove();
	c1.insert(50);
	c1.insert(60);
	c1.PrintData();
}
