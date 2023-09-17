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

	cnt = _printf("%c%g%s%g%%%g",'1', "12");
	printf("\n%d\n", cnt);
}
