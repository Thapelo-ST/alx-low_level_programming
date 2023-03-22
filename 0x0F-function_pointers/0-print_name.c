#include <stdio.h>
/**
 * print_name - prints a name
 *
 * @name: a pointer to a char array representing the name to be printed
 * @f: a ptr to a func that takes a char ptr as arg and returns void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
