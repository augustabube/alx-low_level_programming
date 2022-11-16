#include "main.h"
/**
 * _abs - print the absolute value of integer
 * @n: int data type
 * Return: absolute value of n if negative or otherwise
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
