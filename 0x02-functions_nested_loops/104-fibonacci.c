#include <stdio.h>

/**
 * main - main
 * Descriptoin: print the sum of even fibonacci up to fib value
 * not exceeding 4,000,000
 * Return: 0
 */
int main(void)
{
	int i = i, j = 2, total = 0, k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j = i;
		i = k;
	}
	printf("%i\n", total);
	return (0);
}
