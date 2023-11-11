#include "main.h"

/**
 * _helper_print_hexa_rev - prints in reverse
 * @number: number to be printed
 *
 * Return: count
*/
int _helper_print_hexa_rev(unsigned int number)
{
	int count = 0, _dig;

	if (number >= 16)
		count += _helper_print_hexa_rev(number / 16);

	_dig = number % 16;

	if (_dig < 10)
		_putchar(_dig + '0');
	else
		_putchar((_dig + 'a') - 10);
	count++;

	return (count);
}

/**
 * _handle_hexa - handles octal number conversion
 * @list: va_list from _printf
 *
 * Return: count
*/
int _handle_hexa(va_list list)
{
	unsigned int num;
	int count;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		write(1, "0", 2);
		return (1);
	}

	count = _helper_print_hexa_rev(num);
	return (count);
}
