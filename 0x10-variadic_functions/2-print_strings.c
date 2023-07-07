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
	char *current_string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(ap, char *);
		/*printf("evaluating %s\n", current_string);*/
		if (separator == NULL || i == (n - 1))
		{
			/*printf("inside NULL or last element condition\n");*/
			if (current_string == NULL)
				printf("%s", nil);
			else
				printf("%s", current_string);
		}
		else
		{
			if (current_string == NULL)
			{
				/*printf("argument is null\n");*/
				printf("%s%s", nil, separator);
			}
			else
			{
				/*printf("printing %s\n", current_string);*/
				printf("%s%s", current_string, separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
