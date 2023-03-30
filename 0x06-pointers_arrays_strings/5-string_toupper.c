#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @p:string
 * Return:char
 */
char *string_toupper(char *p)
{
	int i = 0;

	for (; *p != '\0'; p++)
	{
		if (*p >= 97 && *p <= 122)
			*p -= 32;
		i++;
	}
	while (i > 0)
	{
		i--;
		p--;
	}
	return (p);
}
