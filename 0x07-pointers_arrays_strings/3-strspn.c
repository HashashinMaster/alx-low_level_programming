unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, count = 0;
	bool founded = false;
        while (*s)
        {
                for (i = 0; *(accept + i) != '\0'; i++)
                        if (*s == *(accept + i))
			{
				count++;
				founded = true;
			}
		if (!founded)
			break;
		s++;
		founded = false;
        }
	return (count);
}
