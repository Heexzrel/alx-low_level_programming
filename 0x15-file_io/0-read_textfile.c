#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - the function reads a text file and prints its contents to STDOUT.
 * @filename: is used to specify the file to read
 * @letters: number of letters to be read
 * Return (w) - The function returns the actual number of bytes read and printed.
 * If the function fails or `filename` is NULL, it returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	 char *buf;
	 ssize_t fd;
	 ssize_t w;
   	 ssize_t t;

    	fd = open(filename, O_RDONLY);
    	if (fd == -1)
       		 return (0);

   	buf = malloc(sizeof(char) * letters);
     	if (buf == NULL) {
        exit(EXIT_FAILURE);
    }

    t = read(fd, buf, letters);
    w = write(STDOUT_FILENO, buf, t);

    free(buf);
    close(fd);

    return (w);
}
