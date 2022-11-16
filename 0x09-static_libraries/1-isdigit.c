#include "main.h"
/**
 * _isdigit - check if number is between 0 to 9
 * @c: input number
 *
 * Return: 1 if it is a number 0 to 9, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
