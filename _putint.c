#include "main.h"

/**
 * my_printf - فانكشن لطباع سترينج كامل ومعالجه اي اختلاف في النوع "رقم, سترينج, بوينتر" و هكذا
 * @format: سترينج يتم طباعته
 * Return: ll
 */

int _putint(int num, int base)
{
	char buffer[12];
	int index = 0, cnt = 0;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (num != 0)
	{
		int remainder = num % base;
		buffer[index++] = (remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10);
		num /= base;
	}
	for (int i = index - 1; i >= 0; i--)
	{
		cnt += _putchar(buffer[i]);
	}
	return (cnt);
}
