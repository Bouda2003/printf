#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * _putchar - printing one letter
 * @c: the letter that printed
 * Return: ll
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

