int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - a function that returns the square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find root of numbers
 * @i: previous value parameter
 * @n: square root parameter
 * Return: Root
 */
int _sqrt(int i, int n)
{
	if (i > n)
	{
	    return (-1);
	}

	else if (i * i == n)
	{
	    return (i);
	}

	return (_sqrt(i + 1, n));
}
