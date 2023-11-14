#include "main.h"

/**
 * do_string - handles printing of anything passed in double quotes,
 * i.e, strings
 * @data: represents the list of arguments from va_list
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
		write(1, "(null)", sizeof("(null)") - 1);
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
