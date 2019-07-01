#pragma once
#include<iostream>
using namespace std;
#define SIZE 5

class stack
{
private:
	int arr[5];
	int top;
public:
	stack();
	void push(int no);
	void pop();
	bool isEmpty();
	bool isFull();
	void Display();

};