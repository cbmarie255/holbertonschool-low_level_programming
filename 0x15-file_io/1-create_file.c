#include "main.h"

/**
 *create_file - will create a file with given permissions
 *@filename: pointer to a file's name
 *@text_content: pointer to the content of a file
 *Return: 1 for success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_it;
	int text_length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		file_descriptor = open(filename, O_WRONLY | O_CREAT, 0600);
		if (file_descriptor < 0)
			return (-1);
		return (1);
	}
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor < 0)
		return (-1);
	while (text_content[text_length] != '\0')
		text_length++;
	write_it = write(file_descriptor, text_content, text_length);
	if (write_it < 0)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
