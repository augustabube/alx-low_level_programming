#include "main.h"

/**
 * print_time_table - print n starting with 0
 * Description: if n is greater than 15 or less than 0 print nothing
 * @n: int data type
 */
void prin_times_table(int n)
{
	int row = 0, col, val;

	if (n > 15 || n < 0)
		return;
	while (row <= n)
	{
		for (col = 0; col <= n; col++)
		{
			val = row * col;
			if (val > 99)
			{
				_putchar(' ');
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}
			else if (val > 9)
			{
				_putchar(' ');
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}
			else if (col != n)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(val + '0');
			}
			else
				_putchar(val + '0');
			if (col != n)
			{
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
		row++;
	}
}
