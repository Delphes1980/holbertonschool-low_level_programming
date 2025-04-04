#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: the text to write at the end of the file
*
* Return: 1 on success and -1 on failure
* If filename is NULL return -1
* If text_content is NULL: no add anything to the file.
* Return 1 if the file exists and -1 if the file doesn't exist
* or if we don't have the required permissions to write the file
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;
	ssize_t written_text;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

		while (text_content[length] != '\0')
		{
			length++;
		}

		written_text = write(file, text_content, length);

		if (written_text == -1)
		{
			close(file);
			return (-1);
		}

	close(file);

	return (1);
}
