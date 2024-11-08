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
	Stack* oldLastNote = s->before;  

	
	Stack* newNote = new Stack;  
	newNote->value = element;
	newNote->before = oldLastNote;

	s->before = newNote;
}

int pop(Stack* s)
{
	int returnInt = -1;  

	Stack* lastNode = s->before;
	if (lastNode == NULL)  
	{
		return NULL;  
	}

	Stack* beforeLastNode = lastNode->before;  

	s->before = lastNode; 

	returnInt = beforeLastNode->value;  

	
	delete lastNode; 

	return returnInt;
}