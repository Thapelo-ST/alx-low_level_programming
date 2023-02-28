/**
 * print_rev - prints a string in reverse order, followed by a new line
 *
 * @s: a pointer to a null-terminated string
 *
 * Description: This function outputs the characters in the string pointed
 *              to by `s` in reverse order, followed by a new line.
 */

void print_rev(char *s)
{
	int len = 0;
	char *p = s;

	/* Finding the length of the string */
	while (*p != '\0')
	{
		len++;
		p++;
	}

	/* Printing the string in reverse order */
	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
