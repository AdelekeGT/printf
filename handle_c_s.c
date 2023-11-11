#include "main.h"

/**
 * handle_c_s - handles char passed to ellipsis whether character or string
 * @ch: character to be printed
 * @list: va_list from _printf
 *
 * Return: status
*/
int handle_c_s(const char *ch, va_list list)
{
	char a_char, *str;
	int count = 0, i = 0;

	if (*ch == 'c')
	{
		a_char = va_arg(list, int);
		write(1, &a_char, 1);
		count++;
	} else if (*ch == 's')
	{
		str = va_arg(list, char *);
		if (str == NULL)
		{
			write(1, "(null)", sizeof("(null)") - 1);
			return (6);
		}
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
			count++;
		}
	} else if (*ch == 'd')
	{
		count += print_decimal(list);
	} else if (*ch == 'i')
	{
		count += print_integer(list);
	}
	return (count);
}
