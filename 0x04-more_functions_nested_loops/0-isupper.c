#include "main.h"
/**
 * _isupper - check if parameter is upper
 * @c: The first integer
 *
 * Return: The sum of a and b
 */
int _isupper(int c)
{
	chat i;

	for (char i = 'a'; i <= 'z'; i++)
		if( c == i)
			return (0);
	return (1);
}
