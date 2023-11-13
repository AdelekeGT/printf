#include "main.h"

/**
 * do_pointer_address - prints memory address
 * @data: va_list from _printf
 *
 * Return: count
 */
int do_pointer_address(va_list data)
{
	void *_p_addr_;
	unsigned long _value_addr_;
	int count = 0;

	_p_addr_ = va_arg(data, void *);

	if (_p_addr_ == NULL)
	{
		write(1, "(nil)", sizeof("(nil)"));
		return (5);
	}
	_value_addr_ = (unsigned long)_p_addr_;
	write(1, "0x", 2);
	count += helper_print_hexadecimal_reverse(_value_addr_) + 2;

	return (count);
}
