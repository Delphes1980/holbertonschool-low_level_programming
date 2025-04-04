#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s: parameter
*
* Return: Always 0
*/

int _strlen(char *s)
{

	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}

/**
* create_file - function that creates a file
* @filename: the name of the file to create
* @text_content: it is a NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
* if the file already exists: truncate it
* if filename is NULL: return -1
* if text_content is NULL: create an empty file
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t written_text;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		written_text = write(file, text_content, _strlen(text_content));
	}

	if (written_text == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
