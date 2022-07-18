#include "main.h"

/**
 *read_textfile - will read a text file and print it to the POSIX stdout
 *@filename: pointer to the filename
 *@letters: the actual number of letters it should read and print
 *Return: the acutal number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	int read_it;
	int write_it;
	char *buffer = malloc(letters);

	if (buffer == NULL || filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
	{
		free(buffer);
		return (0);
	}
	read_it = read(file_descriptor, buffer, letters);
	if (read_it < 0)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	write_it = write(STDOUT_FILENO, buffer, read_it);
	if (write_it < 0)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (write_it);
}

