// fifo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	Queue *queue = createQueue();
	enQueue(queue, 2);
	enQueue(queue, 3);
	enQueue(queue, 1);
	print(queue);
	enQueue(queue, 1);
	print(queue);
	deQueue(queue);
	deQueue(queue);
	print(queue);
	deleteQueue(&queue);
	return 0;
}

