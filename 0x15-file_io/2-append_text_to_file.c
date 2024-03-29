#include "main.h"

/**
 * append_text_to_file - appends to file
 * @filename: name of file
 * @text_content: content of text
 * Return: int value
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/* decalare variables */
	int fd, wr, len;
	/* checking validity */
	if (filename == NULL)
		return (-1);
	/* assigning file description/definition */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	/* checking if there was anything in txt contnent */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	/*getting length*/
	len = 0;
	while (text_content[len])
		len++;
	/*appending file*/
	wr = write(fd, text_content, len);
	if (wr == -1 || wr != 1)
	{
		close(fd);
		return (-1);
	}
	/*finishing task*/
	close(fd);
	return (1);
}
