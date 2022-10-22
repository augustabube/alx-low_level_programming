#include <stdio.h>
/**
 * main - main block
 * print all numbers of base 10
 * Return: all good
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
