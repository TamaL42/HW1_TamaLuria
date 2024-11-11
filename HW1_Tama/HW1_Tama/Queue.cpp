#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->queue = (int*)malloc(size * sizeof(int));
	q->count = 0;
	q->size = size;
}

void cleanQueue(Queue* q)
{
	free(q->queue);
	q->size = 0;
	q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	q->queue[q->count] = newValue;
	q->count++;
}

int dequeue(Queue* q)
{
	if (q->count == 0)
	{
		return -1;
	}
	q->count--;
	return q->queue[q->count];
}

bool isEmpty(Queue* s)
{
	if (s->count == 0)
	{
		return true;
	}
	
	return false;
}

bool isFull(Queue* s)
{
	if (s->count == s->size)
	{
		return true;
	}

	return false;
}