#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - print all numbers separated by separator
 * @separator: string to use a sepator between the numbers
 * @n: number of integers supplied
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else if (i == (n - 1))
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	printf("\n");
}
