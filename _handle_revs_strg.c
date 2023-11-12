#include "main.h"

/**
 * _handle_revs_strg - prints string in reverse
 * @list: va_list from _printf
 *
 * Return: count
*/
int _handle_revs_strg(va_list list)
{
	char *the_str;
	int i, count = 0, length = 0;

	the_str = va_arg(list, char *);
	if (the_str == NULL)
	{
		write(1, "(null)", sizeof("(null)") - 1);
		return (6);
	}
	if (*the_str == '\0')
		return (-1);

	while (the_str[length] != '\0')
		length++;
	if (length == 0)
		return (-1);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(the_str[i]);
		count++;
	}
	return (count);
}
