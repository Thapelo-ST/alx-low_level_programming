#include "main.h"
#include <stdio.h>

/*function to check errors prototype*/
void err_handler(int file_from, int file_to, char *argv[]);

/* main function */
/**
 * main - program that copies the content of a file to another file.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 Always success
 */

int main(int argc, char **argv)
{
	/* declare variables */
	int file_from, file_to, err;
	ssize_t num_char, new_char;
	mode_t mode;
	char buffer[1024];

	/* counting variables */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	/*assigning varibles*/
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, mode);
	err_handler(file_from, file_to, argv);
	num_char = 1024;
	/*checking validity of file from*/
	while (num_char == 1024)
	{
		/* read file check validity */
		num_char = read(file_from, buffer, 1024);
		if (num_char == -1)
			err_handler(-1, 0, argv);
		/* write file and check validity */
		new_char = write(file_to, buffer, num_char);
		if (new_char == -1)
			err_handler(0, -1, argv);
	}
	/*check for file from close error and print err msg*/
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd file %d\n", file_from);
		exit(100);
	}
	/*check for file to close error and print err msg*/
	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd file %d\n", file_to);
		exit(100);
	}
	return (0);
}

/* function declaration to check for errors */
/**
 * err_handler - function that checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: the arguments vector.
 * Return: nothing to return.
 */

void err_handler(int file_from, int file_to, char *argv[])
{
	/*checking validity of file from*/
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*checking validity of file to*/
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}
