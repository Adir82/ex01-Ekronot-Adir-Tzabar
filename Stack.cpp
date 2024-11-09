#include <iostream>
#include "Stack.h"

#define ONE 1

bool isEmpty(Stack* s)
{
	return  s->s == NULL || s->s->num == NULL;
}

void push(Stack* s, unsigned int element)
{
	if (isEmpty(s))
	{
		s->s->num = element;
		s->s->next = NULL;
		return;
	}

	Stack* new_s = new Stack;
	initStack(new_s);

	new_s->s->num = s->s->num;
	new_s->s->next = s->s->next;

	s->s->next = new_s->s;
	s->s->num = element;

}

int pop(Stack* s)
{
	int num = 0;
	if (isEmpty(s))
	{
		return -1;
	}

	num =  s->s->num;
	s->s = s->s->next;

	return num;

}

void initStack(Stack* s)
{
	s->s = new LinkedList;
	s->s->next = NULL;
	s->s->num = NULL;
}

void cleanStack(Stack* s)
{
	if(!isEmpty(s))
	{ 
		s->s->next = NULL;
		s->s->num = NULL;
	}
}