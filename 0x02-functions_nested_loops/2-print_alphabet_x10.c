#include "main.h"



void print_alphabet_x10(void)
{
	int i;
	int j;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 9; i++)
	{
		for (j = 0; alphabets[i] != '\0'; i++)
		{
			_putchar(alphabets[i]);
		}
		_putchar('\n');
	}
}
