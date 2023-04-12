#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int s1Length = 0, s2Length = 0, length, s1NULL = 0, s2NULL = 0, i, j;
	char *strConc;

	if (s1 != NULL)
	{
		while (*(s1 + s1Length) != '\0')
			s1Length++;
		s1Length++;
	}
	else
		s1NULL = 1;
	if (s2 != NULL)
	{
		while (*(s2 + s2Length) != '\0')
			s2Length++;
	}
	else
		s2NULL = 1;
	length = s1Length + s2Length + s1NULL + s2NULL;
	strConc = malloc(length * sizeof(char));
	if (s1 == NULL)
		strConc[0] = ' ';
	else
		for (i = 0; s1[i] != '\0'; i++)
			strConc[i] = s1[i];
	if (s2 == NULL)
		strConc[i] = ' ';
	else
		for (j = 0; s2[j] != '\0'; j++)
			strConc[j + i] = s2[j];
	strConc[length] = '\0';
	return (strConc);


}
