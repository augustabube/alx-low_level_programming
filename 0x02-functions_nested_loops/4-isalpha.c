#include "main.h"
/**
 * _isalpha - check alphabet character
 * @c: is a data type
 * Return: 1 if letter, lowercase,or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	/*if c is between 64 and 91 ASCII decimals for chars or 96 abd 123 */
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
