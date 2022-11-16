#include "main.h"

/**
 * _memset - fills memory with a constant bytes
 * @s: string to be filled
 * @b: value to fill string
 * @n: number of characters to fill
 * Return: pointers to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
