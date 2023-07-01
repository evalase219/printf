#include "main.h"
#include <stdlib.h>
#define BUFF 1024

/**
 * write_buffer - function that write buffe
 * @buffer: pointer to the chars
 * Return: Always 0
 */
int write_buffer(char *buffer)
{
	int len = 0;
	int i;

	buffer = (char *) malloc(sizeof(char) * BUFF);
	if (buffer == NULL)
	{
		return (-1);
	}
	for (i = 0; i < BUFF; i++)
		buffer[i] = '0';
	if (len > 0)
	{
		putchr(len);
	}
	free(buffer);
	return (len);
}
