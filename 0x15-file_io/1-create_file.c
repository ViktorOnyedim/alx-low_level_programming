#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file cannot be created,
 * cannot be written, write "fails", etc...).
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);

	/* get text_content length */
	for (count = 0; text_content[count] != '\0'; count++)
		;

	if (text_content != NULL)
		len = write(fd, text_content, count);

	close(fd);
	if (len == -1)
		return (-1);

	return (1);
}
