#include <stdio.h>
/**
 * main - main
 * Description: from 1 and 2 print 50 fibonacci
 * Return: (Success)
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%li, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%li\n", j);
		}
		else
		{
			printf("%li, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
