/***************************************************************
Problem:      Assignment Stacks and Queues
Question:    Basic ADTs
In the class you learned and implemented 4 basic ADTs:
1. Single Linked List
2. Stack:
a. Stack using your Linked List
b. Stack using an array
3. Queue:
a. Queue using your Linked List
b. Queue using an array
4. DeQueue:
a. DeQueue using your Linked List
b. DeQueue using an array
Cleanup your code that you wrote in class, make all classes as templates (for this you will need to have
only one header file for each ADT that includes all the function.. in other words: class’s cpp file contents
should be copied to the .h file)
You must submit the following:
List.h Singly linked list from class fully implemented
StackLL.h Stack using your Linked List
StackA.h Stack using an array
QueueLL.h Queue using your Linked List
QueueA.h Queue using an array
DeQueueLL.h DeQueue using your Linked List
DeQueueA.h DeQueue using an array
This is not new implementation; this is what you worked on in-class.
You grade is split between your work and your review of the other person’s work


Name:  Andrew Fearing
ID: 1549883
Date: 09/30/18

Status:  complete
****************************************************************/



#include <iostream>
#include "List.h"
#include "StackLL.h"
#include "StackA.h"
#include "QueueLL.h"
#include "QueueA.h"
#include "DeQueueLL.h"
#include "DeQueueA.h"
#include "mergeSort.h"
#include <vector>
using namespace std;




int main()
{
	const int LIST_SIZE = 6;
	int list[LIST_SIZE] = { 30,20,9,8,9,3 };
	mergeSort<int>(list, 0, LIST_SIZE - 1);
	for (int i : list)
	{
		cout << i << endl;
	}

	// cout << "List" << endl;
	// List<int> l;
	// l.pushBack(6);
	// l.pushBack(48);
	// l.pushBack(22);
	// l.pushBack(4);
	// l.iSort();
	// l.displayList();

	// cout << "Dequeue List" << endl;
	// DeQueueLL<int> dl;
	// dl.pushFront(1);
	// dl.pushFront(2);
	// dl.pushFront(3);
	// dl.pushFront(4);
	// dl.pushBack(7);
	// cout << dl.popFront() << endl;
	// 
	// cout << "Stack List" << endl;
	// StackLL<double> sll;
	// sll.push(3.2);
	// sll.push(2.1);
	// sll.push(4.0);
	// cout << sll.top() << endl;
	// 
	// cout << "Queue List" << endl;
	// QueueLL<double> qll;
	// qll.push(3.2);
	// qll.push(2.1);
	// qll.push(4.0);
	// cout << qll.pop() << endl;
	// 
	// cout << "-------------------------" << endl;
	// 
	// cout << "Dequeue Array" << endl;
	// DeQueueA<double> da;
	// da.pushFront(1);
	// da.pushFront(2);
	// da.pushFront(3);
	// da.pushFront(4);
	// da.pushBack(7);
	// cout << da.popFront() << endl;
	// 
	// cout << "Stack Array" << endl;
	// StackA<double> sa;
	// sa.push(3.2);
	// sa.push(2.1);
	// sa.push(4.0);
	// cout << sa.pop() << endl;
	// 
	// cout << "Queue Array" << endl;
	// QueueA<double> qa;
	// qa.push(3.2);
	// qa.push(2.1);
	// qa.push(4.0);
	// cout << qa.pop() << endl;
	return 0;
}