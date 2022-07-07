#include "variadic_functions.h"

/**
 * print_numbers -
 * @separator: The character to be used as separator
 * @n: The argument count
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf(separator);
	}
	printf("\n");
	va_end(ap);
}
