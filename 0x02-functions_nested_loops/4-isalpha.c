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
	char ALPHABETS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; alphabets[i] != '\0'; i++)
	{
		if (c == alphabets[i] && c == ALPHABETS[i])
		{
			return (1);
		}
	}
	return (0);
}
