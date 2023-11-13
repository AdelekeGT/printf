#include "main.h"

/**
 * helper_print_hexadecimal_reverse - prints in reverse
 * @_number: _number to be printed
 *
 * Return: count
*/
int helper_print_hexadecimal_reverse(unsigned int _number)
{
	int count = 0, _dig;

	if (_number >= 16)
		count += helper_print_hexadecimal_reverse(_number / 16);

	_dig = _number % 16;

	if (_dig < 10)
		custom_putchar(_dig + '0');
	else
		custom_putchar((_dig + 'a') - 10);
	count++;

	return (count);
}

/**
 * do_hexadecimal - handles octal _number conversion
 * @data: va_list from _printf
 *
 * Return: count
*/
int do_hexadecimal(va_list data)
{
	unsigned int num, nein = 0;
	int count;

	num = va_arg(data, unsigned int);
	if (num < nein)
		return (-1);
	if (num == 0)
	{
		write(1, "0", 2);
		return (1);
	}

	count = helper_print_hexadecimal_reverse(num);
	return (count);
}
