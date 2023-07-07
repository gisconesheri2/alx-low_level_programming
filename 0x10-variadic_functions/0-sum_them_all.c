#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all arguments
 * @n: number of arguments to supply to the function
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}
