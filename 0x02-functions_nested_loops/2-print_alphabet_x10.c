#include "main.h"


/**
 * print_alphabet_x10 - printing alphabets x10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabets[j] != '\0'; j++)
		{
			_putchar(alphabets[j]);
		}
		_putchar('\n');
	}
}
