#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 */
void puts_half(char *str)
{
	int i, n;

	n = 0;
	while (str[n] != '\0')
		n++;

	for ( i = (n +1) / 2;i < n;i++)
	{
		_putchar(str[i]);
	}
	_putcahr('\n');
}
