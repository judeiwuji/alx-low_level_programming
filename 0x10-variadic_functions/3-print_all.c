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
	int i;
	char c;
	char *str, *sep;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		c = format[i];
		sep = ", ";
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
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("(nil)");
			printf(str);
			break;
		default:
			sep = "";
		}
		if (format[i + 1] != '\0')
			printf(sep);
		i++;
	}
	printf("\n");
	va_end(ap);
}
