#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 
 */
int main(void)
{
	int cnt;

	cnt = _printf("%c%c%c%c %s",'1', '2', '3', '4', "1234");
	printf("\n%d\n", cnt);
}
