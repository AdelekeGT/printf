#include "main.h"

/**
 * _handle_p_addr - prints memory address
 * @list: va_list from _printf
 *
 * Return: count
 */
int _handle_p_addr(va_list list)
{
	void *_address;
	unsigned long _addr_val;
	int count = 0;

	_address = va_arg(list, void *);

	if (_address == NULL)
	{
		write(1, "(nil)", sizeof("(nil)"));
		return (5);
	}
	_addr_val = (unsigned long)_address;
	write(1, "0x", 2);
	count += _helper_print_hexa_rev(_addr_val) + 2;

	return (count);
}
