#include "main.h"
#include <stdio.h>

/**
 * _puts - ll
 * @str: ll
 */

void _puts(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
