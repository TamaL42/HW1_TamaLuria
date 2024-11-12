#include "Utils.h"


void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack;
	initStack(s);
	for (i = 0;i < size;i++)
	{
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
	cleanStack(s);
	delete(s);
}
int* reverse10()
{
	int* nums = new int[SIZE];
	int i = 0;
	int num = 0;
	for (i = 0; i < SIZE; i++)
	{
		std::cin >> num;
		nums[i] = num;
	}
	reverse(nums, SIZE);
	return nums;
}