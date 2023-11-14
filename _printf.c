#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: pointer to constant string
 *
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	FormatSpecifier specs[] = {
		{"%c", do_char}, {"%s", do_string}, {"%%", do_percent},
		{"%d", do_decimal}, {"%i", do_integer}, {"%b", do_binary},
		{"%u", do_unsigned_decimal}, {"%o", do_octal},
		{"%x", do_hexadecimal}, {"%X", do_hexadecimal_upper},
		{"%r", do_reverse_string}, {"%S", do_non_printable},
		{"%p", do_pointer_address}, {"%R", do_rot13_func}, {NULL, NULL}
	};
	int _ch_printed = 0, i, n = 0;
	va_list data;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(data, format);
	for (i = 0; format[i] != '\0'; i = i + n)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			_ch_printed++;
			n = 1;
		} else if (format[i] == '%')
		{
			_ch_printed += do_instructions(specs, data, &format[i + 1]);
			n = 2;
		}
	}
	va_end(data);
	return (_ch_printed);
}
