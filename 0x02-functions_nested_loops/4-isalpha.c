#include "main.h"

/**
 * _isalpha - checks if char is alpha
 *
 * @c: int
 * Return: 0 or 1
 *
 */
int _isalpha(int c)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHABETS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; alphabets[i] != '\0'; i++)
	{
		if (c == alphabets[i] || c == ALPHABETS[i])
		{
			return (1);
		}
	}
	return (0);
}
