#include "main.h"

/**
 * print_decimal - prints decimal or hexadecimal
 * @list: va_list from _printf
 *
 * Return: status
*/
int print_decimal(va_list list)
{
	int integ, num_end, _dig;
	unsigned int number;
	int count = 0, _e = 1;

	integ = va_arg(list, int);
	number = (integ < 0) ? -integ : integ;
	num_end = number % 10;

	if (integ < 0)
	{
		_putchar('-');
		count++;
	}

	while ((number / 10) != 0)
	{
		_e = _e * 10;
		number = number / 10;
	}
	number = (integ < 0) ? -integ : integ;

	while (_e > 0)
	{
		_dig = number / _e;
		_putchar(_dig + '0');
		number = number - (_dig * _e);
		_e = _e / 10;
		count++;
	}
	_putchar(num_end + '0');
	return (count + 1);
}
