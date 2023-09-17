#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * _printf - printf function
 * @format: string that printed
 * Return: I DONT KNOW
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (format != NULL)
			{
				switch (*format)
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
					case 'd':
						count += _putint(va_arg(args, int), 10);
						break;
					case 'i':
						count += _putint(va_arg(args, int), 10);
						break;
					default:
						count += 2;
						_putchar('%');
						_putchar(*format);
						break;
				}
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
