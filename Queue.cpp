#include "Queue.h"

#include <iostream>




void cleanQueue(Queue* q)
{
	for (int i = 0; i < sizeof(q->values);i++) 
	{
		q->values[i] = 0;
	}

	q->maxElementsNum = 0;
	q->elementNum = 0;


}


void initQueue(Queue* q, unsigned int size)
{
	q->values = new unsigned int[size];

	for (size_t i = 0; i < size; i++) 
	{
		q->values[i] = 0;

	}
	q->maxElementsNum = size;
	q->elementNum = 0;

}

int dequeue(Queue* q)
{
	q->elementNum -= 1;
	unsigned int retrunValue = q->values[q->elementNum];
	q->values[q->elementNum] = 0;

	return retrunValue;
}


void enqueue(Queue* q, unsigned int newValue)
{
	
	if (q->elementNum >= q->maxElementsNum)
	{
		q->maxElementsNum += 1;

		unsigned int* tempPointer = new unsigned int[q->maxElementsNum];

		for (int i = 0; i < q->maxElementsNum; i++)
		{
			tempPointer[i] = q->values[i];
		}

		delete[] q->values;
		q->values = tempPointer;
	}

	q->values[q->elementNum] = newValue;


	q->elementNum += 1;
}

bool isEmpty(Queue* s)
{
	return s->elementNum == 0;
}

bool isFull(Queue* s) 
{
	 return s->elementNum == s->maxElementsNum;
}



