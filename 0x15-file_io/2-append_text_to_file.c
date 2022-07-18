#include "main.h"

/**
 *append_text_to_file - will append text at the end of a file
 *@filename: pointer to a file's name
 *@text_content: pointer to the content of a file
 *Return: 1 for success, -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int write_it;
	int text_length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
