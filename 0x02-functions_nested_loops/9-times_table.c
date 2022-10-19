#include "main.h"
/**
 * times_table - prints 9 times table, starting from 0
 * Return: 0
 */
void times_table(void)
{
	int row = 0; /*rows*/
	int col; /* columns*/
	int n; /* values*/

	while (row < 10) /* calculate the value for each row*/
	{
		col = 0;
		while (col < 10)
		{
			n = row * col; /*multiply rows by columns */
			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else if (col != 0) /*if column not first print space*/
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			if (col != 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
