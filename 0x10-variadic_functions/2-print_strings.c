#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/*decalare variables*/
	va_list(args);
	unsigned int i;
	char *strings;
	/*code*/
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(args, char *);
		if (strings == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strings);
		}
		/*checking separator*/
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
