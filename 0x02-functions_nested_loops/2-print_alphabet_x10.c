#include "main.h"



void print_alphabet_x10(void)
{
	int i;
	int j;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 9; i++)
	{
		for (j = 0; alphabets[j] != '\0'; j++)
		{
			_putchar(alphabets[j]);
		}
		_putchar('\n');
	}
}
