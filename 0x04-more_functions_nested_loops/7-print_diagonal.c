#include "main.h"
/**
 * print_diagonal - print a diagonal line at the terminal
 * @n: times the diagonal line is printed
 *
 * Retun: no return
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\n');
	}
}
