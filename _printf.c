#include "main.h"
#include <stdarg.h>

/**
 * _printf - print output according to a format.
 * @format: is a character string that chose the type.
 * Return: [int] number of characters printed without null by \0
 */

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
	int i = 0, count = 0;
    for (i = 0; format[i] != '\0'; i++) 
	{

        if (format[i] == '%') {
            if (format[i+1] == 'c') {
                char c = va_arg(args, int);
                _putchar(c);
                count++;
                i++;
            } else if (format[i+1] == 's') {
                char *str = va_arg(args, char *);
                int j = 0;
                while (str[j] != '\0') {
                    _putchar(str[j]);
                    count++;
                    j++;
                }
                i++;
            } else if (format[i+1] == '%') {
                _putchar('%');
                count++;
                i++;
            }
        } else {
            _putchar(format[i]);
            count++;
        }
    }
    va_end(args);
    return count;
}