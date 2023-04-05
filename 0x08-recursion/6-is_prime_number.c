/**
 * _sqrt_recursion - a function that returns 1 if the 
 * input integer is a prime number, otherwise return 0.
 * 
 *
 *@n: the number parameter
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{
	int i = 1;

	if(n % 2 == 0 || n % 3 == 0 || 
	n % 5 == 0 || n % 7 == 0 || n % 11 == 0 || n == 1 || n == -1)
	{
		return 0;
	}
	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || i == 1)
	{
		return 1;
	}
}
