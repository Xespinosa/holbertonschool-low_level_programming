#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int kip, len;

	if (filename == NULL)
		return (-1);

	kip = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (kip == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(kip, text_content, len);
		close(kip);
	}
	return (1);
}
