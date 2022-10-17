#include <stdio.h>

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
	if (n > 0)
	{
		printf("is positive\n");
		if (n == 0)
			printf("is zero\n");
		if (n < 0)
			printf("is negative\n");
	}
	printf("value of n is: %d\n", n);
	return (0);
}

