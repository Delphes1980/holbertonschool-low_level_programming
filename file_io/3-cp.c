#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
* open_files - Opens the source and destination files.
* @source_file: The source file name.
* @dest_file: The destination file name.
* @source_fd: Pointer to store the source file descriptor.
* @destination_fd: Pointer to store the destination file descriptor.
*
* Return: 0 on success, or corresponding error code on failure.
*/

int open_files(const char *source_file, const char *dest_file,
			int *source_fd, int *destination_fd)
{
	/* Open the source file in read-only mode */
	*source_fd = open(source_file, O_RDONLY);
	if (*source_fd == -1)
	{
		return (98);
	}

	/*Create/open the dest. file with write-only and truncate it if it exists*/
	*destination_fd = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (*destination_fd == -1)
	{
		close(*source_fd);
		return (99);
	}

	return (0);
}

/**
* close_files - Closes the file descriptors.
* @source_fd: The source file descriptor.
* @destination_fd: The destination file descriptor.
*
* Return: 0 on success, or 100 on failure to close.
*/

int close_files(int source_fd, int destination_fd)
{
	/* Close both file descriptors */
	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		return (100);
	}

	if (close(destination_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		return (100);
	}

	return (0);
}

/**
* copy_content - Copies content from source to destination.
* @source_fd: The source file descriptor.
* @destination_fd: The destination file descriptor.
*
* Return: 0 on success, or corresponding error code on failure.
*/

int copy_content(int source_fd, int destination_fd)
{
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	/* Read from source file and write to destination file in blocks */
	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		return (98);
	}

	return (0);
}

/**
* copy_file - Copies content from one file to another.
* @source_file: Name of the source file.
* @dest_file: Name of the destination file.
*
* Return: 0 on success, or corresponding error code on failure.
*/

int copy_file(const char *source_file, const char *dest_file)
{
	int source_fd, destination_fd, result;

	/* Open source and destination files */
	result = open_files(source_file, dest_file, &source_fd, &destination_fd);
	if (result != 0)
	{
		return (result);
	}

	/* Copy content from source file to destination file */
	result = copy_content(source_fd, destination_fd);
	if (result != 0)
	{
		close_files(source_fd, destination_fd);
		return (result);
	}

	return (close_files(source_fd, destination_fd));
}

/**
* main - Entry point of the program. Copies content from one file to another.
* @argc: Argument count.
* @argv: Argument vector (array of arguments).
*
* Return: 0 on success, exits with corresponding error code on failure.
*/

int main(int argc, char **argv)
{
	int result;

	/* Check if the correct number of arguments is provided */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	/* Copy file content and handle errors */
	result = copy_file(argv[1], argv[2]);

	if (result == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}
	else if (result == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	}

	return (result);
}
