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
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case '%':
					_putchar('%');
					break;
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					_puts(va_arg(args, char*));
					break;
				default:
					_putchar(*format);
					break;
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
}
