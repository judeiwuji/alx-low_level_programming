#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: Format specifier
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	int i, j;
	char *formatters = "cifs\0";
	char c;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (formatters[j] != '\0')
		{
			c = formatters[j];
			if (c == format[i])
			{
				switch (c)
				{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					printf("%s", va_arg(ap, char *));
					break;
				}
				break;
			}
			j++;
		}
		if (formatters[j] != '\0' && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
