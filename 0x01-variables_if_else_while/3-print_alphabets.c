#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'printing lowercharacters'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; lower[i] != '\0'; i++)
		putchar(lower[i]);
	for (i = 0; upper[i] != '\0'; i++)
		putchar(upper[i]);
	putchar('\n');
	return (0);
}
