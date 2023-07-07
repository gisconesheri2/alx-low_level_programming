#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - print all numbers separated by separator
 * @separator: string to use a sepator between the numbers
 * @n: number of integers supplied
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *nil = "(nil)";

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			if (va_arg(ap, char *) == NULL)
				printf("%s", nil);
			else
				printf("%s", va_arg(ap, char *));
		}
		else if (i == (n - 1))
		{
			if (va_arg(ap, char *) == NULL)
				printf("%s", nil);
			else
				printf("%s", va_arg(ap, char *));
		}
		else
		{
			if (va_arg(ap, char *) == NULL)
				printf("%s%s", nil, separator);
			else
				printf("%s%s", va_arg(ap, char *), separator);
		}
	}
	va_end(ap);
	printf("\n");
}
