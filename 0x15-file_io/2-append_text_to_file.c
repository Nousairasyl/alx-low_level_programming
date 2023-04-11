#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - the number of bytes written to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    if (filename == NULL)
        return (-1);

    int fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    ssize_t bytes_written = 0;
    if (text_content != NULL)
        bytes_written = write(fd, text_content, strlen(text_content));

    close(fd);
    return (bytes_written);
}
