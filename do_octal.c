#include "main.h"

/**
 * helper_print_octal_reverse - prints in reverse
 * @_number: _number to be printed
 *
 * Return: count
*/
int helper_print_octal_reverse(unsigned int _number)
{
	int count = 0;

	if (_number >= 8)
		count += helper_print_octal_reverse(_number / 8);
	custom_putchar((_number % 8) + '0');
	count++;
	return (count);
}

/**
 * do_octal - handles the printing of base-8 numbers
 * @data: represents the list of arguments from va_list
 *
 * Return: count
*/
int do_octal(va_list data)
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

	count = helper_print_octal_reverse(num);
	return (count);
}
