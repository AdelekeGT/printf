#include "main.h"

/**
 * _helper_print_dec_rev - prints in reverse
 * @number: number to be printed
 *
 * Return: count
*/
int _helper_print_dec_rev(unsigned int number)
{
	int count = 0;

	if (number >= 10)
		count += _helper_print_dec_rev(number / 10);
	_putchar((number % 10) + '0');
	count++;
	return (count);
}

/**
 * _handle_uns_dec - prints unsigned deciaml
 * @list: va_list from _printf
 *
 * Return: count
*/
int _handle_uns_dec(va_list list)
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

	count = _helper_print_dec_rev(num);
	return (count);
}
