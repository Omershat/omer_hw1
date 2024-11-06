#include "Queue.h"

#include <iostream>



// iterate the array and set each element to zero
void cleanQueue(Queue* q)
{
	for (int i = 0; i < sizeof(q->values);i++) 
	{
		q->values[i] = 0;// here we reset each value to zero
	}

	q->maxElementsNum = 0; // reset the max cap in the queue
	q->elementNum = 0; // reset the number of element


}


void initQueue(Queue* q, unsigned int size)
{
	q->values = new unsigned int[size];
	
	// each element was set to zero

	for (size_t i = 0; i < size; i++) // i used this after a serch in google to store non negative values
	{
		q->values[i] = 0; // reeset to zero

	}
	q->maxElementsNum = size;
	q->elementNum = 0;

}

int dequeue(Queue* q)
{
	unsigned int returnValue = q->values[0]; // Get the value at the front of the queue

	//  moving everyone one to the left
	for (int i = 0; i < q->elementNum - 1; i++)
	{
		q->values[i] = q->values[i + 1];
	}

	q->values[q->elementNum - 1] = 0; // clear the last position
	q->elementNum -= 1; // decreasing the number of elements

	return returnValue;
}


void enqueue(Queue* q, unsigned int newValue)
{
	// cheaking if the queue if full
	if (q->elementNum >= q->maxElementsNum)
	{
		// increasing one
		q->maxElementsNum += 1;

		// assigned new memory for the expended array 
		unsigned int* tempPointer = new unsigned int[q->maxElementsNum];

		// getting the old values
		
		for (int i = 0; i < q->maxElementsNum; i++)
		{
			tempPointer[i] = q->values[i];
		}

		// deallocate memory of the old array
		delete[] q->values; // i used this from google to understand how to delocate the memory
		q->values = tempPointer;
	}

	q->values[q->elementNum] = newValue;


	q->elementNum += 1;
}

bool isEmpty(Queue* s)
{
	// return if the queue is empty 
	return s->elementNum == 0;
}

bool isFull(Queue* s) 
{
	// return if the queue is full
	 return s->elementNum == s->maxElementsNum;
}



