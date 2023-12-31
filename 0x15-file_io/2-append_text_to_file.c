#include "main.h"

/**
 * append_text_to_file - it appends text at the end of a file.
 * @filename: is the name of the file to append.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, ch_write, lenght;

if (!filename)
return (-1);
if (text_content)
{
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
lenght = 0;
while (*(text_content + lenght) != '\0')
lenght++;
ch_write = write(fd, text_content, lenght);
if (ch_write == -1)
{
close(fd);
write(STDOUT_FILENO, "fails", 5);
return (-1);
}
}
close(fd);
return (1);
}
