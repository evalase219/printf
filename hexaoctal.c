#include "main.h"
#include <stdlib.h>
#define MAX 12
/**
* unsgnd_oct - function that handles the octal
* @num: number to handle
* Return: integer
*/
int unsgnd_oct(unsigned int num)
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
		mod = num % 8;
		str[z] = mod + '0';
		num = num / 8;
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
/**
* unsgnd_hex_low - function that handles the hexadecimal lowercase
* @num: number to handle
* Return: integer
*/
int unsgnd_hex_low(unsigned int num)
{
	char *str, store;
	int w, x, mod, y = 0, z = 0, len = 0;

	str = (char *) malloc(sizeof(char) * MAX);
	if (str == NULL)
		return (-1);
	if (num == 0)
	{
		str[z--] = '0';
		str[z - 1] = '\0';
	}
	while (num > 0)
	{
		mod = num % 16;
		if (mod < 10)
		{
			str[z] = mod + '0';
		}
		else
		{
			str[z] = mod + 'a' - 10;
		}
		num = num / 16;
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
/**
* unsgnd_hex_up - function that handles the hexadecimal uppercase
* @num: number to handle
* Return: integer
*/
int unsgnd_hex_up(unsigned int num)
{
	char *str, store;
	int w, x, mod, y = 0, z = 0, len = 0;

	str = (char *) malloc(sizeof(char) * MAX);
	if (str == NULL)
		return (-1);
	if (num == 0)
	{
		str[z--] = '0';
		str[z - 1] = '\0';
	}
	while (num > 0)
	{
		mod = num % 16;
		if (mod < 10)
		{
			str[z] = mod + '0';
		}
		else
		{
			str[z] = mod + 'A' - 10;
		}
		num = num / 16;
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
