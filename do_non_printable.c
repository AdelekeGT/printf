#include "main.h"

/**
 * do_non_printable - handles the printing of non-printable chars
 * ASCII value > 0 || < 32 || >= 127
 * print \x in their place, followed by ASCII code
 * value of char in upper hexadecimal
 * @data: represents the list of arguments from va_list
 *
 * Return: count
*/
int do_non_printable(va_list data)
{
	char *_pr;
	int _i, count = 0;
	unsigned int _ASCII;

	_pr = va_arg(data, char *);
	if (_pr == NULL)
		return (-1);

	for (_i = 0; _pr[_i] != '\0'; _i++)
	{
		if ((_pr[_i] > 0 && _pr[_i] < 32) || _pr[_i] >= 127)
		{
			write(1, "\\x", sizeof("\\x"));
			count += 2;
			_ASCII = (unsigned int)_pr[_i];
			if (_ASCII <= 15)
			{
				write(1, "0", 1);
				count++;
			}
			count += helper_print_hexadecimal_upper_reverse(_ASCII);
		} else
		{
			write(1, &_pr[_i], sizeof(_pr[_i]));
			count++;
		}
	}
	return (count);
}
