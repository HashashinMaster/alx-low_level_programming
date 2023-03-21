#include "main.h"

/**
 * print_sign - checks the sign_of_number
 *
 * @c: int
 * Return: 0,1 or -1
 *
 */
int print_sign(int c)
{	
	if (c > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
