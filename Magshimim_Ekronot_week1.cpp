#include <iostream>
#include "Queue.h"
#include <stdbool.h>

#define ONE 1

bool isEmpty(Queue* s)
{
	return s->num == NULL;
}

bool isFull(Queue* s)
{
	int count = ONE, size = s->size;

	while (s->before != NULL)
	{
		count++;
		s = s->before;
	}

	return count == size;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		std::cout << "The list is full" << std::endl;
		return;
	}

	if (isEmpty(q))
	{
		q->before = NULL;
		q->num = newValue;
		return;
	}

	Queue* new_q = new Queue;
	new_q->num = newValue;
	new_q->size = q->size;
	new_q->before = NULL;

	while (q->before != NULL)
	{
		q = q->before;
	}

	q->before = new_q;
}

int dequeue(Queue* q)
{
	if (isEmpty(q))
	{
		return -1;
	}

	int last_num = 0;

	while (q->before)
	{
		q = q->before;
		last_num = q->num;
	}

	q->before = NULL;
	return last_num;
}

void initQueue(Queue* q, unsigned int size)
{
	q->before = NULL;
	q->num = NULL;
	q->size = size;
}

void cleanQueue(Queue* q)
{
	while (q)
	{
		dequeue(q);
	}
}