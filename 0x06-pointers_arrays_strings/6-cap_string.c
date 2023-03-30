#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: pointer
 */
char *cap_string(char *p)
{
	char regex[] = " \t\n,;.!?\"(){}";
	int i = 0,j;

	for (; *p != '\0'; p++, i++)
	{
		if (*p >= 97 && *p <= 122)
		{
			if (i == 0)
			{
				*p -= 32;
				continue;
			}
			for (j = 0; regex[j] != '\0'; j++)
			{
				if (*p == regex[j])
				{
					*(p + i + 1) -= 32;
					*(p + i) = 0;
				}
			}
		}
	}

	while (i > 0)
	{
		i--;
		p--;
	}

	return (p);
		
}
