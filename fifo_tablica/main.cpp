// fifo_tablica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "fifo.h"

using namespace std;

int main()
{
	Queue *queue = createQueue(10);
	enQueue(queue, 1);
	enQueue(queue, 2);
	enQueue(queue, 3);
	enQueue(queue, 4);
	enQueue(queue, 5);
	enQueue(queue, 6);
	enQueue(queue, 7);
	enQueue(queue, 8);
	enQueue(queue, 9);
	cout << deQueue(queue);
	cout << deQueue(queue);
	cout << deQueue(queue) << endl;
	enQueue(queue, 10);
	enQueue(queue, 11);
	enQueue(queue, 12);
	cout << deQueue(queue);
	cout << deQueue(queue);
	cout << deQueue(queue) << endl;
	cout << deQueue(queue) << endl;
	cout << deQueue(queue) << endl;
	cout << deQueue(queue) << endl;
	cout << deQueue(queue) << endl;
	cout << deQueue(queue) << endl;
	QDel(&queue);
	system("PAUSE");
	return 0;
}

