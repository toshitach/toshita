#include<iostream>
using namespace std;
#define SIZE 5
class CQueue
{
private:
	int arr[SIZE];
	int rear;
	int front;
public:
	CQueue();
	bool isEmpty();
	bool isFull();
	void insert(int no);
	void remove();
	void PrintData();
};

