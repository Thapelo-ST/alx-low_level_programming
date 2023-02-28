#include <stdio.h>

/**
 * _puts - makes the string have a new line after it ran through the function
 *
 * @str: a pointer to an charecter
 *
 * Description: This function checks string pointed to by str and when its
 *              done it puts a new line.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
