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
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			len++;
		}
		return (len);
	}
	int cnt = 0;

	while (*str != '\0')
	{
		cnt += _putchar(*str);
		str++;
	}
	return (cnt);
}
