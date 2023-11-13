#include "main.h"

/**
 * do_percent - handles % format specifier
 * @data: va_list from _printf
 *
 * Return: count
*/
int do_percent(va_list data)
{
	(void)data;
	write(1, "%", 1);
	return (1);
}
