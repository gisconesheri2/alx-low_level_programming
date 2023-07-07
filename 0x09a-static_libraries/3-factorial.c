/**
 * factorial - gets the factorial of n
 * @n: number to get the factorial
 *
 * Return: factorial of the number, -1 if n is negative
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
