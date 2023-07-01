#include "main.h"
#include <stdlib.h>
#define MAX 64
/**
 * conv_bin - function that converts unsigned integers to binary
 * @num: the number to be converted
 * Return: integer
 */
int conv_bin(int num)
{
	char *str, store;
	int c, b, a = 0, n = 0, z = 0, y = 0, len = 0, mod = 0;

	str = (char *) malloc(sizeof(char) * MAX);
	if (str == NULL)
		return (-1);
	if (num == 0)
	{
		str[0] = '0';
	}
	else
	{
		if (num < 0)
		{
			str[0] = '-';
			num *= -1;
			z = 1;
		}
	}
	do {
		mod = num % 2;
		str[z] = mod + '0';
		n = n + (mod * 10 * y);
		num = num / 2;
		z++;
	} while (num != 0);
	str[z] = '\0';
	c = z - 1;
	if (str[0] == '-')
		a += 1;
	for (b = a; b < c; b++)
	{
		store = str[b];
		str[b] = str[c];
		str[c] = store;
		c--;
	} len += add_str(str);
	free(str);
	return (len);
}
