#include "stack.h"
#include <iostream>

void initStack(Stack* s)
{
	s->value = 0;
	s->before = 0;
}

void cleanStack(Stack* s)
{
	stack* lastNote = s;
	stack* tempPoninter;

	while (lastNote)
	{
		tempPoninter = lastNote->before;

		lastNote->value = NULL;
		lastNote->before = NULL;
		delete lastNote;

		lastNote = tempPoninter;
	}
}
