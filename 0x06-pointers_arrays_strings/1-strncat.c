#include "main.h"

/**
 * _strncat - concat 2 string
 * @dest:char pointer
 * @src:char pointer
 * @n:int
 * Return:char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}

	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (s);
}
