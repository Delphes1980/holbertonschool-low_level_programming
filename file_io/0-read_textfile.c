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
	int text;
	int total_written = 0;
	ssize_t print_text, file_to_print;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc((letters));

	if (buffer == NULL)
		return (0);

	text = open(filename, O_RDONLY);

	if (text == -1)
		return (0);

	while ((file_to_print = read(text, buffer, letters)) != -1)
	{
		if (file_to_print == 0)
			break;

		print_text = write(1, buffer, file_to_print);

		if (print_text == -1)
		{
			close(text);
			free(buffer);
			return (0);
		}

		total_written += print_text;
	}

	close(text);
	free(buffer);

	return (total_written);
}
