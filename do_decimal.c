#include "main.h"

/**
 * do_decimal - prints decimal or hexadecimal
 * @data: va_list from _printf
 *
 * Return: status
*/
int do_decimal(va_list data)
{
	int _integ, _dig;
	unsigned int number;
	int count = 0, _e = 1;

	_integ = va_arg(data, int);
	if (_integ == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	if (_integ < 0)
	{
		write(1, "-", 1);
		count++;
	}
	number = (_integ < 0) ? -_integ : _integ;

	while ((number / 10) != 0)
	{
		_e = _e * 10;
		number = number / 10;
	}
	number = (_integ < 0) ? -_integ : _integ;

	while (_e > 0)
	{
		_dig = number / _e;
		custom_putchar(_dig + '0');
		number = number - (_dig * _e);
		_e = _e / 10;
		count++;
	}
	return (count);
}
