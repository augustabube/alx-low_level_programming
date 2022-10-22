#include <stdio.h>
/**
 * main - main block
 * print a lowercase alphabet in reverse
 * Return: all good
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
