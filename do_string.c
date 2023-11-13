#include "main.h"

/**
 * do_string - handles char passed to ellipsis whether character or string
 * @data: va_list from _printf
 *
 * Return: status
*/
int do_string(va_list data)
{
	char *str;
	int count = 0, i = 0;

	str = va_arg(data, char *);
	if (str == NULL)
	{
		write(1, "(null)", sizeof("(null)"));
		va_end(data);
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
