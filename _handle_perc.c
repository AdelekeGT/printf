#include "main.h"

/**
 * _handle_perc - handles % format specifier
 * @list: va_list from _printf
 *
 * Return: count
*/
int _handle_perc(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}
