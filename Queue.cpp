#include "Queue.h"

#include <iostream>




void cleanQueue(Queue* q)
{
	for (int i = 0; i < sizeof(q->values);i++) 
	{
		q->values[i] = NULL;
	}

	q->maxElementsNum = NULL;
	q->elementNum = NULL;


}


void initQueue(Queue* q, unsigned int size);
{
	q->values = new unsigned int[size];

	for (size_t i = 0; i < size; i++) 
	{
		q->values[i] = NULL;

	}
	q->maxElementNum = size;
	q->elementNum = 0;

}