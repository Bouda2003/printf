#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int cnt;

	cnt = _printf("%d %i 1234 %c%c%c%c %s", 1234, 1234, '1', '2', '3', '4', "1234");
	printf("\n%d\n", cnt);
}
