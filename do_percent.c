#include "main.h"

/**
 * do_percent - handles the printing of % if none of the
 * format specifier characters match format[1]
 * @data: represents the list of arguments from va_list
 *
 * Return: 1
*/
int do_percent(va_list data)
{
	(void)data;
	write(1, "%", 1);
	return (1);
}
