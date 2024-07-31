#include <stdio.h>

int main()
{
	int *ptr;
	int a = 34;
	ptr = &a;

	if (ptr)
		printf("True\n");
	else
		printf("False\n");
	return (0);
}
