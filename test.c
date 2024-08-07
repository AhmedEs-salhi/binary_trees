#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

void logic (int a)
{
	int i;

	i += a;
	printf("%d\n", i);
}

int main()
{
	int result = 2;

	logic(result);
	logic(result);
	logic(result);

	return (0);
}
