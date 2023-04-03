#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 *
 * @s: pointer
 *
 * @b: constant byte
 *
 * @n: positive int
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++
	}

	return (s)
}
