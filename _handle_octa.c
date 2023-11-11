#include "main.h"

/**
 * _helper_print_octa_rev - prints in reverse
 * @number: number to be printed
 *
 * Return: count
*/
int _helper_print_octa_rev(unsigned int number)
{
	int count = 0;

	if (number >= 8)
		count += _helper_print_octa_rev(number / 8);
	_putchar((number % 8) + '0');
	count++;
	return (count);
}

/**
 * _handle_octa - handles octal number conversion
 * @list: va_list from _printf
 *
 * Return: count
*/
int _handle_octa(va_list list)
{
	unsigned int num, nein = 0;
	int count;

	num = va_arg(list, unsigned int);
	if (num < nein)
		return (-1);
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	count = _helper_print_octa_rev(num);
	return (count);
}
