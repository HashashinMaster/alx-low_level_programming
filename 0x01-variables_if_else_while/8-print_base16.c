#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'program that prints all the numbers of base 16 lower'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		if (i < 10)
			putchar('0' + i);
		else
			putchar('a' + i - 10);
	putchar('\n');
	return (0);
}
