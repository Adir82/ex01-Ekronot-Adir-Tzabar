#ifndef LINKEDLIST_H
#define LINKEDLIST_H


/* a LinkedList that contains positive integer values. */
typedef struct LinkedList
{
	LinkedList* next;
	int num;

} LinkedList;

void addHead(LinkedList** head, int num);
void RemoveHead(LinkedList** head);

#endif // LINKEDLIST_H