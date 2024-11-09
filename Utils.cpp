#include <iostream>
#include "Utils.h"
#include "Stack.h"

#define TEN 10
#define ONE 1

void reverse(int* nums, unsigned int size)
{
	Stack* s = new Stack;
	initStack(s);

	for (int i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}

	for (int i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
}

int* reverse10()
{
	int* nums = new int[TEN];
	int num = 0;

	std::cout << "Enter 10 numbers" << std::endl;
	for (int i = 0; i < TEN; i++)
	{
		std::cin >> num;
		std::cout << std::endl;
		
		nums[TEN - i - ONE] = num;
	}

	return nums;

	delete(nums);
}