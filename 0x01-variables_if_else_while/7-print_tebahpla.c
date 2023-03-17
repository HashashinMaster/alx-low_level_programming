#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'alphabetics reverse'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char reverseAlph[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; reverseAlph[i] != '\0'; i++)
		putchar(reverseAlph[i]);
	putchar('\n');
	return (0);


}
