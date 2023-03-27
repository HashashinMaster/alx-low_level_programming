#include "main.h"
/**
* print_rev - printing a string in reverse
* @s: the string to be printed in rev
*/
void print_rev(char *s)
{
	int i, n;
	char* holder = &s;
	n = 0;
	while (*s++)
	{
		n++;
	}

	for (i = n; i >= 0; i--)
	{
		_putchar(holder[i]);
	}
	_putchar('\n');
}

