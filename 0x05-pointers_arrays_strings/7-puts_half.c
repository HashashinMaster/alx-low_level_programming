void puts_half(char *str)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for ( i = (n-1) / 2;i >= 0;i--)
	{
		_putchar(str[i]);
	}
}
