#include "main.h"
#include <stdarg.h>
#define BUFF 1024

/**
 * write_buffer - function that write buffe
 * @buffer: pointer to the chars
 */
void write_buffer(char *buffer)
{
	int len = 0;

	buffer = (char *) malloc(sizeof(char) * BUFF);
	if (buffer == NULL)
	{
		return (-1);
	}
	if (len > 0)
	{
		putchr(len);
	}
	free(buffer);
}
