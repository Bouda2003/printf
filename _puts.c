#include "main.h"
#include <stdio.h>

/**
 * _puts - ll
 * @str: ll
 * Return: ll
 */

int _puts(const char *str)
{
	if (str == NULL)
	{
		return (6);
	}
	int cnt = 0;

	while (*str != '\0')
	{
		cnt += _putchar(*str);
		str++;
	}
	return (cnt);
}
