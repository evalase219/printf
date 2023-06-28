#include "main.h"

/**
 * add_str - funcion that add string to stdout
 * @str: string to be added
 *
 * Return: return the string count
 */
int add_str(char *str)
{
	int m, len = 0;

	if (str != NULL)
	{
		for (m = 0; str[m] != '\0'; m++)
		{
			putchr(str[m]);
			len += 1;
		}
	}
	else if (str == NULL)
	{
		return (-1);
	}
	return (len);
}
