#include "main.h"
/**
* print_rev - printing a string in reverse
* @s: the string to be printed in rev
*/
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (*s++)
	{
		n++;
	}

	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

