#include "main.h"
/**
 * power_operation - returns natural square root of a num
 * @n: input num
 * @a: iterator
 * Return: squareroot or -1
 */
int power_operation(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + power_operation(n, a + 1));
}
/**
 * _sqrt_recursion - returns the natural sqrt of a num
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < o)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_recursion(n, 2));
}
