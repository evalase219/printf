#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: the first argument
 * @...: other arguments
 *
 * Return: return the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list pm;
	unsigned int z = 0;
	int count = 0;
	char letter;

	va_start(pm, format);
	for (; format[z] != '\0'; z++)
	{
		if (format[z] != '%')
			count += putchr(format[z]);
		else if (format[z + 1] == 'c')
		{
			letter = (char)va_arg(pm, int);
			count += putchr(letter);
			z++;
		}
		else if (format[z + 1] == 's')
		{
			count += add_str(va_arg(pm, char *));
			z++;
		}
		else if (format[z + 1] == '%')
		{
			count += putchr('%');
			z++;
		}
		else if (format[z + 1] == 'd' || format[z + 1] == 'i')
		{
			count += conv_str(va_arg(pm, int));
			z++;
		}
		else if (format[z + 1] == 'b')
		{
			count += conv_bin(va_arg(pm, int));
			z++;
		}
	}
	va_end(pm);
	return (count);
}
