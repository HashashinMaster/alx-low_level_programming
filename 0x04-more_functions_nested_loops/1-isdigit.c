#include "main.h"

/**
* _isupper - check if parameter is upper
* @c: The first integer
*
* Return: 0 or 1
*/
int _isdigit(int c)
{
	char digits[] = "0123456789";
	int i;

	for (i = 0; digits[i] != '\0'; i++)
		if(c == digits[i])
			return (1);
	return (0);
}
