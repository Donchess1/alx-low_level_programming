#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @my_file: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or my_file is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *my_file, char *content)
{
	int o, w, len = 0;

	if (my_file == NULL)
		return (-1);

	if (content != NULL)
	{
		for (len = 0; content[len];)
			len++;
	}

	o = open(my_file, O_WRONLY | O_APPEND);
	w = write(o, content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

