#include "main.h"

/**
 * print_number - prints a number send to this function
 * @n: number should be printed.
 * Return: The number of arguments printed
 */
int print_number(int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
