#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: string
 *
 * @accept: string
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0, founded;

	while (*s)
	{
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
			{
				count++;
				founded = 1;
			}
		if (!founded)
			break;
		s++;
		founded = 0;
	}
	return (count);
}
