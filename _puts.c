#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _puts - ll
 * @str: ll
 * Return: ll
 */

int _puts(const char *str)
{
	int count = 0;
	int string_length = 0;

	while (str[string_length] != '\0')
	{
		string_length++;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (string_length);
}
