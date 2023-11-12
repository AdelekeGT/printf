#include "main.h"

/**
 * _handle_nein_print - handles non-printable chars
 * ASCII value > 0 || < 32 || >= 127
 * print \x in their place, followed by ASCII code
 * value of char in upper hexadecimal
 * @list: va_list from _printf
 *
 * Return: count
*/
int _handle_nein_print(va_list list)
{
	char *_non_;
	int _i, count = 0;
	unsigned int num_ascii;

	_non_ = va_arg(list, char *);
	if (_non_ == NULL)
		return (-1);

	for (_i = 0; _non_[_i] != '\0'; _i++)
	{
		if ((_non_[_i] > 0 && _non_[_i] < 32) || _non_[_i] >= 127)
		{
			write(1, "\\x", sizeof("\\x"));
			count += 2;
			num_ascii = (unsigned int)_non_[_i];
			if (num_ascii <= 15)
			{
				_putchar('0');
				count++;
			}
			count += _helper_print_hexa_upper_rev(num_ascii);
		} else
		{
			_putchar(_non_[_i]);
			count++;
		}
	}
	return (count);
}
