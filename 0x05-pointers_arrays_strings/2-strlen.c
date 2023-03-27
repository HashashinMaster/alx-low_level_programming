#include "main.h"
/**
 * _strlen - return the length of a string
 @s: char to check
 * Description: this will return the length of a string
 */
int _strlen(char *s)
{
	int counter = 0;
	
	while (*s++) 
	{
		counter++;
	}
	return (counter);
}
