#include "main.h"
/**
 * print_diagonal - print a diagonal line at the terminal
 * @n: times the diagonal line is printed
 *
 * Retun: no return
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
	for (; i < n; i++)
	{
		for (j = 0; j < n; j++)
		_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
