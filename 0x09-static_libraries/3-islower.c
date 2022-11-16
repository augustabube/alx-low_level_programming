#include "main.h"
/**
 * _islower - print the function that check letters
 * @c: is a char data type
 * Return: 1 if lowercase, otherwise 0
 */
int _islower(int c)
{
	/*if the character is between 96 and 123 ASCII decimals for char*/
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
