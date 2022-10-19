#include <stdio.h>
#include <stdlib.h>

/**
 * main - print in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'j'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
