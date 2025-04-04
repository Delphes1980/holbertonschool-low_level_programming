#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the text to be printed
* @letters: the number of letters it should read and print
*
* Return: returns the actual number of letters it could read and print
* if the file can not be opened or read: return 0
* if filename is NULL: return 0
* if write fails or doesn't write the expected amount of bytes: return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int total_written = 0;
	ssize_t print_text, file_to_print;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc((letters));

	if (buffer == NULL)
		return (0);

	file_to_print = read(file, buffer, letters);

		if (file_to_print > 0)
		{
			print_text = write(STDOUT_FILENO, buffer, file_to_print);

			if (print_text == -1)
			{
				close(file);
				free(buffer);
				return (0);
			}

			total_written += print_text;
		}

	close(file);
	free(buffer);

	return (total_written);
}
