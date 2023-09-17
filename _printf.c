#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - printf function
 * @format: string that printed
 * Return: I DONT KNOW
 */

int _printf(const char *format, ...)
{
	int count = 0;
	const char *formater;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	formater = format;
	while (*formater != '\0')
	{
		if (*formater == '%')
		{
			formater++;
				switch (*formater)
				{
					case '%':
						count += _putchar('%');
						break;
					case 'c':
						count += _putchar(va_arg(args, int));
						break;
					case 's':
						count += _puts(va_arg(args, char*));
						break;
					case '\0':
						count += _putchar('%');
						break;
					default:
						count += 1;
						_putchar('%');
						_putchar(*formater);
						break;
				}
		}
		else
			count += _putchar(*formater);
		formater++;
	}
	va_end(args);
	return (count);
}
