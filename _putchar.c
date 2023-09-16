#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * _putchar - printing one letter
 * @c: the letter that printed
 */

void _putchar(char c)
{
    write(1, &c, 1);
}

