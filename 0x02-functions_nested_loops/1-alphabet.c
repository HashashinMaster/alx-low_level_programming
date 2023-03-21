#include "main.h"

/**
 * print_alphabet - printing alphabets
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; alphabets[i] != '\0'; i++)
	{
		_putchar(alphabets[i]);
	}
	_putchar('\n');
}
