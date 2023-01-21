#include "main.h"

/**
 * _char - print char
 * @args: pointer
 * Return: int
 */

int _char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
