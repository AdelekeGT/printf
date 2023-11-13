#include "main.h"

/**
 * do_char - handles char passed to ellipsis whether character or string
 * @data: va_list from _printf
 *
 * Return: status
*/
int do_char(va_list data)
{
	char a_char;
	int count = 0;

	a_char = va_arg(data, int);
	write(1, &a_char, 1);
	count++;

	return (count);
}
