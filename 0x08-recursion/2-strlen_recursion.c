#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s:string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		s++;
		i++;
		i += _strlen_recursion(s);
	}
	return (i);
}
