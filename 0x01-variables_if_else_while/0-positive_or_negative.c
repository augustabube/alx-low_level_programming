#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* assign a number to the variable n */
	int n;
	/*using the if statement */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
		if (n == 0)
			printf("%d is zero\n", n);
		if (n < 0)
			printf("%d is negative\n", n);
	}
	return (0);
}
