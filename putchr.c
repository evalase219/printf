#include <unistd.h>

/**
 * putchr - write the character y to stdout
 * @y: character to print
 *
 * Return: On success 1
 */
int putchr(char y)
{
	return ( write(1, &y, 1));
}
