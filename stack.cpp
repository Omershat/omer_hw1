#include "stack.h"
#include <iostream>

void initStack(Stack* s)
{
	s->value = 0;
	s->before = 0;
}

void cleanStack(Stack* s)
{
	Stack* lastNote = s;
	Stack* tempPoninter;

	while (lastNote)
	{
		tempPoninter = lastNote->before;

		lastNote->value = NULL;
		lastNote->before = NULL;
		delete lastNote;

		lastNote = tempPoninter;
	}
}

void push(Stack* s, unsigned int element)
{
	Stack* oldLastNote = s->before;  // getting the last 

	
	Stack* newNote = new Stack;  
	newNote->value = element;
	newNote->before = oldLastNote;

	s->before = newNote; // last in first
}

int pop(Stack* s)
{
	int retrunInt = -1;

	Stack* lastNote = s->before;
	if (!lastNote)  // cheaking if the last one is found
	{
		return retrunInt;
	}
	Stack* beforeLastNote = lastNote->before;  // take the secend last 


	s->before = beforeLastNote;  // cacshe update

	retrunInt = lastNote->value;

	// deleting
	lastNote->value = 0;
	lastNote->before = 0;
	delete lastNote;

	return retrunInt;
}
