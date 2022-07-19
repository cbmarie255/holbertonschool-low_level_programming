#include "main.h"

/**
 *main - file_from will copy to file_to
 *@argc: argument count
 *@argv: argument vectors
 *Return: 0 for success and
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_it, close_from, close_to;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Useage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((read_it = read(file_from, buffer, BUFSIZ)) > 0)
		if (file_to < 0 || (write(file_to, buffer, read_it) != read_it))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (read_it < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_from = close(file_from);
	close_to = close(file_to);
	if (close_from < 0 || close_to < 0)
	{
		if (close_from < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		else if (close_to < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
