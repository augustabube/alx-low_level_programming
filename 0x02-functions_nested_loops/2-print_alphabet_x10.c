#include "main.h"
/**
 * print_alphabet_x10  - print alphabets using _putchar - in lowercase
 * @void: print_alphabet_x10
 *
 * Return:  (Success)
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
