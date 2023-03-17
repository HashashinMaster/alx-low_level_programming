#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char nStat[13];
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0)
		strcpy(nStat,"is positive");
	else if (n === 0)
		strcpy(nStat,"is zero");
	else
		strcpy(nStat,"is negative");
	printf("d% s%",n,nStat);
	return (0);

