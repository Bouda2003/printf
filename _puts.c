#include "main.h"
#include <stdio.h>

void _puts(const char* str)
{
    	while (*str != '\0')
    	{
		_putchar(*str);
		str++;
    	}
}
