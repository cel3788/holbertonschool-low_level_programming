nclude "main.h"

/**
 * read_textfile - reads a text file and prints it to standard outpout
 * @filename: pointer to the name of the text file
 * @letters: number of letters to be read and printed
 * Return: the number of letters or 0 if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, bytesr, bytesw;
char *buffer;

if (filename == NULL)
return (0);

file = open(filename, O_RDONLY);

if (file == -1)
return (0);

buffer = malloc(sizeof(char) * letters);

if (buffer == NULL)
{
close(file);
return (0);
}

bytesr = read(file, buffer, letters);
if (bytesr == -1)
{
free(buffer);
return (0);
}

bytesw = write(STDOUT_FILENO, buffer, bytesr);
if (bytesw != bytesr)
{
close(file);
free(buffer);
return (0);
}

close(file);

free(buffer);

return (bytesr);
}

