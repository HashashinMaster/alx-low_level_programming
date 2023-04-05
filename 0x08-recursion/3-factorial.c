int factorial(int n)
{
	int n2;
	if (n > 0)
	{
		n2 = n * factorial(n - 1);
		return (n2);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

}
