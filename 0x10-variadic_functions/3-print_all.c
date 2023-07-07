#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

void print_all(const char * const format, ...)
{
	va_list ap;
	char current_val_char;
	int current_val_int;
	float current_val_float;
	char *current_val_string;
	unsigned int i, j = 0;
	char *allowed_formats = "cifs";

	va_start(ap, format);

	while (format[i] != '\0')
	{
		while (allowed_formats[j] != '\0')
		{
			if (format[i] == allowed_formats[j])
			{
				va_arg(ap, char)
			}
			j++;
		}

		i++;
	}

