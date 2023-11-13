#include "main.h"

/**
 * _handle_str - handles char passed to ellipsis whether character or string
 * @list: va_list from _printf
 *
 * Return: status
*/
int _handle_str(va_list list)
{
	char *str;
	int count = 0, i = 0;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		write(1, "(null)", sizeof("(null)") - 1);
		va_end(list);
		return (6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		count++;
	}
	return (count);
}
