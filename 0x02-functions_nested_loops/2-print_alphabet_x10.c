#include "main.h"
/**
 * Description: print_alphabet_x10 using _putchar - in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
