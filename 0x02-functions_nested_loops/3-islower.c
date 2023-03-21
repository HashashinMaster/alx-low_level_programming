#include "main.h"

/**
 * _islower - checks if char is lower
 *
 * @c: int
 * Return: 0 or 1
 *
 */
int _islower(int c)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabets[i] != '\0'; i++)
	{
		if (c == alphabets[i])
		{
			return (1);
		}
	}
	return (0);
}
