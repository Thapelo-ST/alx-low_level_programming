#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to be read
 * @text_content: the text inside the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	/*decalaring variables*/
	int fd, wr, len;
	mode_t mode = S_IRUSR | S_IWUSR;

	/*checking filename validity*/
	if (filename == NULL)
		return (-1);
	/* assigning file and trunc-ting if it exist */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
	{
		return (-1);
	}
	/* checking text content */
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	/*getting length*/
	for (len = 0; text_content[len] != '\0'; len++)
		;
	/*writing file*/
	wr = write(fd, text_content, len);
	if (wr == -1 || wr != len)
	{
		close(fd);
		return (-1);
	}
	/* finish and return */
	close(fd);
	return (1);
}
