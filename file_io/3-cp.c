#include "main.h"

/**
* copy_file - Copies content from one file to another.
* @source_file: Name of the source file.
* @destination_file: Name of the destination file.
*
* Return: Nothing. Exits with status codes on various errors:
* 98 if source file cannot be read,
* 99 if destination file cannot be written,
* 100 if file descriptors cannot be closed.
*/

void copy_file(const char *source_file, const char *destination_file)
{
	int source_fd, destination_fd, bytes_read;
	char buffer[1024];
	/*Open source file in read-only mode*/
	source_fd = open(source_file, O_RDONLY);

	if (source_fd == -1 || source_file == NULL)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		exit(98); }
	/*Create/open destination file with write-only and truncate it if it exists*/
	destination_fd = open(destination_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (destination_fd == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_file);
		close(source_fd);
		exit(99); }
	/*Read from source and write to destination in blocks*/
	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
	/*Is the number of bytes_written different from the number of bytes_read?*/
		ssize_t bytes_written = write(destination_fd, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination_file);
			close(source_fd);
			close(destination_fd);
			exit(99); }
	}
	/*If reading failed*/
	if (bytes_read == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_file);
		close(source_fd);
		close(destination_fd);
		exit(98); }
	/*Close both files safely*/
	if (close(source_fd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100); }
	if (close(destination_fd) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_fd);
		exit(100); }
}

/**
* main - Entry point of the program. Copies content from one file to another.
* @argc: Argument count.
* @argv: Argument vector (array of arguments).
*
* Return: 0 on success, exits with 97 on incorrect usage.
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
