#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>i
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'checking a random number stat'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (n > 5)
		puts(" Last digit of %d is %d  and is greater than 5",n,lastDigit);
	else if (n == 0)
		puts(" Last digit of %d is %d  and is 0",n,lastDigit);
	else
		puts(" Last digit of %d is %d  and is less than 6 and not 0",n,lastDigit);
	return (0);
}
