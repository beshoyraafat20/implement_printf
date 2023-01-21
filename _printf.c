#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format.
 * @format: character string.
 *
 * Return: the number of characters printed (excluding the null byte used to end
 * output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i = 0;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch(format[i])
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
				break;
				case 's':
				{
					char *str = va_arg(args, char *);
					int j = 0;

					while (str[j] != '\0')
					{
						_putchar(str[j]);
						count++;
						j++;
					}
					break;
                }
    			case '%':
					_putchar('%');
					count++;
					break;
				default:
				return (count);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}