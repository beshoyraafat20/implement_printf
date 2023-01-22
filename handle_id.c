#include "main.h"
#include <math.h>
/**
 * print_int - print integer
 * @args: pointer
 * Return: count of printed length
 */
int _int(va_list args)
{
	int number = va_arg(args, int);
	int i = 0;
	int divider = 1;

	if (number < 0)
	{
		_putchar('-');
		i++;
		number = -1 * number;
	}

	while (number / divider > 9)
		divider *= 10;

	while (divider != 0)
	{
		i += _putchar('0' + (number / divider));
		number %= divider;
		divider /= 10;
	}

	return (i);
}
