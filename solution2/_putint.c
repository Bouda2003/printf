#include "main.h"

/**
 * _printf - printf function
 * @format: string that printed
 * Return: I DONT KNOW
 */

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; ++i)
    {
        if (format[i] == '%')
        {
            switch (format[++i])
            {
                case 'd':
                case 'i':
                {
                    int value = va_arg(args, int);
                    printf("%d", value);
                    break;
                }
                 default:
                    putchar(format[i]);
            }
        }
        else
        {
            putchar(format[i]);
        }
    }

    va_end(args);
}
