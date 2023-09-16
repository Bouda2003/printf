#include "main.h"
#include <stdio.h>

/**
 * _puts - ll
 * @str: ll
 */

int _puts(const char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
