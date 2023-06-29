#include "main.h"
#include <stdlib.h>
#define MAX 12
/**
 * conv_str - convert string to integer
 * @num: pointer to the string
 * Return: integer
 */
int conv_str(int num)
{
	char *str;
	int mod, len = 0;
	int w, x, y = 0, z = 0;
	char store;

	str = (char *) malloc(sizeof(char) * MAX);
	if (str == NULL)
		return (-1);
	if (num == 0)
	{
	       	str[0] = '0';
		str[1] = '\0';
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
		mod = num % 10;
		str[z] = mod + '0';
		num = num / 10;
		z++;
	} while (num != 0);
	str[z] = '\0';
	x = z - 1;
	if (str[0] == '-')
		y += 1;
	for (w = y; w < x; w++)
	{
		store = str[w];
		str[w] = str[x];
		str[x] = store;
		x--;
	} len += add_str(str);
	free(str);
	return (len);
}
