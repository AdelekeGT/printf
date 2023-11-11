#include "main.h"

/**
 * _handle_ch - handles char passed to ellipsis whether character or string
 * @list: va_list from _printf
 *
 * Return: status
*/
int _handle_ch(va_list list)
{
	char a_char;
	int count = 0;

	a_char = va_arg(list, int);
	write(1, &a_char, 1);
	count++;

	return (count);
}
