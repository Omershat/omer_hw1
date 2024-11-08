#include "linkedList.h"
#include <iostream>

void remove(linkedList* firstNote)
{
	linkedList* oldFirst = firstNote->next;

	firstNote->next = oldFirst->next;
	oldFirst->next = 0;
	oldFirst->value = 0;
	delete oldFirst;
}

void add(linkedList* firstNote, unsigned int value)
{
	linkedList* oldFirst = firstNote->next;

	linkedList* newFirst = new linkedList;
	newFirst->value = value;
	newFirst->next = oldFirst;

	firstNote->next = newFirst;
}

