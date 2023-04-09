#include "main.h"

/**
 * read_textfile - reads a textfile zmd
 * prints it to the POSIX standard output
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declare and assign variables variables */
	int fd, rd, wr;
	char *buff;

	/*checking filename validity*/
	if (filename == NULL)
		return (0);
	/*assigning buffer*/
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	/* opening file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	/*reading file*/
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	/*printing contents of buffer*/
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1 || wr != rd)
	{
		free(buff);
		close(fd);
		return (0);
	}
	/*ending processes if they finished in success*/
	close(fd);
	free(buff);
	return (rd);
}
