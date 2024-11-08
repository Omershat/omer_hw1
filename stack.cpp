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
	stack* oldLastNode = s->before;  

	
	stack* newNote = new stack;  
	newNote->value = element;
	newNote->before = s;  

	s = newNote;  
}
