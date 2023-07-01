#include "main.h"
#include <stdlib.h>
#define MAX 12
/**
* unsgnd_digit - convert string to unsigned integer
* @num: number of the integers
* Return: integer
*/
int unsgnd_digit(unsigned int num)
{
	char *str;
	int mod, len = 0;
	int w, x, y = 0, z = 0;
	char store;

	str = (char *) malloc(sizeof(char) * MAX);
	if (str == NULL)
	{
		return (-1);
	}
	if (num == 0)
	{
		str[z--] = '0';
		str[z - 1] = '\0';
	}
	while (num > 0)
	{
		mod = num % 10;
		str[z] = mod + '0';
		num = num / 10;
		z++;
	}
	str[z] = '\0';
	x = z - 1;
	if (str[0] == '-')
	{
		y = y + 1;
	}
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
