#include "main.h"

/**
 * _handle_int - prints decimal or hexadecimald
 * @list: va_list from _printf
 *
 * Return: status
*/
int _handle_int(va_list list)
{
	int integ, _dig;
	unsigned int number;
	int count = 0, _e = 1;

	integ = va_arg(list, int);

	if (integ == 0)
	{
		_putchar('0');
		return (1);
	}
	if (integ < 0)
	{
		_putchar('-');
		count++;
	}
	number = (integ < 0) ? -integ : integ;

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
	return (count);
}
