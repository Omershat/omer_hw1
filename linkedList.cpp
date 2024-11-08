#include "linkedList.h"
#include <iostream>

void remove(linkedList* firstNote)
{
	linkedList* oldFirst = firstNote->next;

	firstNote->next = oldFirst->next;
	oldFirst->next = NULL;
	oldFirst->value = NULL;
	delete oldFirst;
}
