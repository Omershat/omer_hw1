#include "utils.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{

	int temp = 0;

	for (int i = 0; i < size / 2; i++)
	{
		temp = nums[i];

		int indexFromEnd = size - i - 1; 
		nums[i] = nums[indexFromEnd];
		nums[indexFromEnd] = temp;
	}
}


int* reverse10()
{
	const int arraySize = 10;
	int* returnArray = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		std::cout << "Enter " << i << " elemet: ";
		std::cin >> returnArray[i];
	}
	reverse(returnArray, arraySize);
	return returnArray;
}
