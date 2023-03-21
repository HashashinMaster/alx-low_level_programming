#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98, followed by a new line
* @n: starting number
*
* Return: void
*/
void print_to_98(int n)
{
	int i;
	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			_putchar('0' + abs(i) / 10);
			_putchar('0' + abs(i) % 10);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar('0' + abs(i) / 10);
			_putchar('0' + abs(i) % 10);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('0' + abs(i) / 10);
	_putchar('0' + abs(i) % 10);
	_putchar('\n');
}
