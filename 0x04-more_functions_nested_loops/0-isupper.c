#include "main.h"
/**
 * _isupper - check if parameter is upper
 * @c: The first integer
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if(c == i)
			return (0);
	return (1);
}
