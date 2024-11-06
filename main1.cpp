#include <iostream>
#include "Queue.h"

int main() 

{
	Queue q;
	initQueue(&q, 3);

	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);

	if (isFull(&q))
		std::cout << "Queue is full." << std::endl;

	enqueue(&q, 40);

	std::cout << dequeue(&q) << std::endl;

	cleanQueue(&q);

	return 0;


}