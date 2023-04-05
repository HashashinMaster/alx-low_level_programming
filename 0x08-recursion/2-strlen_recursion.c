#include "main.h"
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
