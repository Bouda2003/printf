#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _putint - فانكشن بتحول الرقم لسترينج وتطبعه
 * @num: الرقم اللي هيطبع
 * @base: نوع العد
 * Return: ll
 */

int _putint(int num, int base)
{
	char buffer[12];
	int index = 0, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	while (num != 0)
	{
		int remainder = num % base;

		if  (remainder < 10)
			buffer[index++] =  ('0' + remainder);
		else
			buffer[index++] = ('A' + remainder - 10);
		num /= base;
	}
	for (int i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}
