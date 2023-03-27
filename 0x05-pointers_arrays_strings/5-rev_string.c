#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char
 * Description: This will reverse a string
 */
void rev_string(char *s)
{
	int n, i, j;
	char c;

	n = 0;
	while (s[n] != '\0')
		n++;

	j = n - 1;
	for (i = 0; j >= 0 && i < j; j--, i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
