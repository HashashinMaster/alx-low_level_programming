#include "main.h"

/**
 * leet - encodes a string into 1337
 * @p: string to encode
 *
 * Return: pointer
 */
char *leet(char *p)
{
	int i = 0, j;
	char alph[] = "aAeEoOtTlL";
	char replaced[] = "4433007711";

	while (*(p + i))
	{
		for (j = 0; j <= 9; j++)
		{
			if (alph[j] == *(p + i))
			*(p + i) = replaced[j];
		}
		i++;
	}
	return (p);
}
