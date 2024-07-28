#include <stdio.h>

int True(int a, int b)
{
	return (a ==b);
}

int main()
{
	printf("Result1: %d\n", True(25, 25));
	printf("Result2: %d\n", True(34, 43));

	return (0);
}
