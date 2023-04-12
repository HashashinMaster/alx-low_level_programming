/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *strCpy;
	int i = 0, j;

	if (str == NULL)
                return (NULL);
	while (*(str + i) != '\0')
		i++;
	strCpy = malloc(i * sizeof(*str));
	if (strCpy == NULL)
		return (NULL);
	for (j = 0; *(str + j) != '\0'; j++)
		*(strCpy + j) = *(str + j);
	return (strCpy);
}
