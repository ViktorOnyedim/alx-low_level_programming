#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Do not create file if it does not exist
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t count;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
		;

	if (text_content != NULL)
		len = write(fd, text_content, count);

	close(fd);

	if (len == -1)	
		return (-1);

	return (1);
}
