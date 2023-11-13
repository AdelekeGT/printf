#include "main.h"

/**
 * helper_print_decimal_reverse - prints in reverse
 * @_number: _number to be printed
 *
 * Return: count
*/
int helper_print_decimal_reverse(unsigned int _number)
{
	int count = 0;

	if (_number >= 10)
		count += helper_print_decimal_reverse(_number / 10);
	custom_putchar((_number % 10) + '0');
	count++;
	return (count);
}

/**
 * do_unsigned_decimal - prints unsigned deciaml
 * @data: va_list from _printf
 *
 * Return: count
*/
int do_unsigned_decimal(va_list data)
{
	unsigned int num, nein = 0;
	int count;

	num = va_arg(data, unsigned int);
	if (num < nein)
		return (-1);
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	count = helper_print_decimal_reverse(num);
	return (count);
}
