#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @p:string
 * Return:char
 */
char *string_toupper(char *p)
{
	for (; *p != '\0'; p++)
		if (*p >= 97 && *p <= 122)
			*p -= 32;
	return (p);
}
