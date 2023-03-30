#include "main.h"
#include <stdio.h>


/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: pointer
 */
char *cap_string(char *p)
{
	char regex[] = {' ','\t','\n',',',';','.','!','?','"','(',')','{','}','\0'};
	int i,j;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) >= 97 && *(p + i) <= 122)
		{
			if (i == 0)
			{
				*(p + i) -= 32;
				continue;
			}

			for (j = 0; regex[j] != '\0'; j++)
			{
				if (*(p + i - 1) == regex[j])
				{
					*(p + i) -= 32;
					break;
				}
			}
		}
	}

	return (p);
		
}
