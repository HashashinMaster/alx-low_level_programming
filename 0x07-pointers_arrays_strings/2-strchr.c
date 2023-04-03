#include "main.h"
#define NULL ((void *) 0)
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer or null
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (s);

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
