#include "main.h"
/**
 * _str - print string
 * @args: pointer
 * Return: number of printed char
 */
int _str(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
