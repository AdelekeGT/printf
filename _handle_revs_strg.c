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
	int i_i, count = 0, _len = 0;

	the_str = va_arg(list, char *);
	if (the_str == NULL)
	{
		return (-1);
	}
	if (*the_str == '\0' || *the_str == ' ')
		return (-1);

	while (the_str[_len] != '\0')
	{
		if (!isspace((unsigned char)the_str[_len]))
			break;
		_len++;
	}
	if (_len == 0)
		return (-1);

	for (i_i = _len - 1; i_i >= 0; i_i--)
	{
		_putchar(the_str[i_i]);
		count++;
	}
	return (count);
}
