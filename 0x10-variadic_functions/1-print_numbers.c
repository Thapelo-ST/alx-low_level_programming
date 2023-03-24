#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers.
 */
oid print_numbers(const char *separator, const unsigned int n, ...)
{
	/*declatoing variuables*/
	va_list(args);
	unsigned int i;
	/*checking separator*/
	if (separator == NULL)
	{
		separator = "";
	}
	/*running function*/
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(args, int));
		}
		else
		{
			printf("%d%s", va_arg(args, int), separator);
		}
	}
	va_end(args);
}
