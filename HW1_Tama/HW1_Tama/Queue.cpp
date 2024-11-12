#include <iostream>
#include "Queue.h"

/*role:Initializes the queue
Input : the queue and his size
Output : none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->queue = new int[size];
	q->count = 0;
	q->size = size;
}
/*role: Clears the queue
Input : the queue
Output : none
*/
void cleanQueue(Queue* q)
{
	delete(q->queue);
	q->size = 0;
	q->count = 0;
}
 
void enqueue(Queue* q, unsigned int newValue)
{
	q->queue[q->count] = newValue;
	q->count++;
}
/*role: Deletes the first element in the queue
Input : the queue
Output : the first element
*/
int dequeue(Queue* q)
{
	if (q->count == 0)
	{
		return -1;
	}
	int value = q->queue[0];
	for (int i = 0; i < q->count - 1; i++)
	{
		q->queue[i] = q->queue[i + 1];
	}

	q->count--;
	return value;
}
/*role: Checks if the queue is empty.
Input : the queue 
Output : if the queue is empty
*/
bool isEmpty(Queue* s)
{
	if (s->count == 0)
	{
		return true;
	}
	
	return false;
}
/*role: Checks if the queue is full.
Input : the queue 
Output :if  the queue is full
*/
bool isFull(Queue* s)
{
	if (s->count == s->size)
	{
		return true;
	}

	return false;
}