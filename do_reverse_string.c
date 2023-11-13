#include "main.h"

/**
 * do_reverse_string - prints string in reverse
 * @data: va_list from _printf
 *
 * Return: count
*/
int do_reverse_string(va_list data)
{
	char *str_str;
	int _ind, count = 0, _len = 0;

	str_str = va_arg(data, char *);
	if (str_str == NULL)
	{
		return (-1);
	}
	if (*str_str == '\0' || *str_str == ' ')
		return (-1);

	while (str_str[_len] != '\0')
	{
		_len++;
	}
	if (_len == 0)
		return (-1);

	for (_ind = _len - 1; _ind >= 0; _ind--)
	{
		write(1, &str_str[_ind], sizeof(str_str[_ind]));
		count++;
	}
	return (count);
}
