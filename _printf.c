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
				if (*format == '%' && (format != NULL))
					count += _putchar('%');
				else if (*format == 'c' && (format != NULL))
					count += _putchar(va_arg(args, int));
				else if (*format == 's' && (format != NULL))
					count += _puts(va_arg(args, char*));
				else if (*format == 'd' || *format == 'i' && (format != NULL))
					count += _putchar(va_arg(args, int));
				else
				{
					count += _putchar('%');
					count += _putchar(*format);
				}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
