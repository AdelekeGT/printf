#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: pointer to constant string
 *
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	specifier specs[] = {
		{"%c", _handle_ch}, {"%s", _handle_str},
		{"%%", _handle_perc}, {"%d", _handle_dec},
		{"%i", _handle_int}, {"%b", _handle_bin},
		{"%u", _handle_uns_dec}, {"%o", _handle_octa},
		{"%x", _handle_hexa}, {"%X", _handle_hexa_upper}, {"%r", _handle_revs_strg},
		{"%S", _handle_nein_print}, {"%p", _handle_p_addr}, {NULL, NULL}
	};
	int char_printed = 0, i, n = 0;
	va_list content;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ')
		return (-1);
	va_start(content, format);
	if (content == NULL)
	{
		write(1, "(null)", sizeof("(null)") - 1);
		return (6);
	}
	for (i = 0; format[i] != '\0'; i = i + n)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			char_printed++;
			n = 1;
		} else if (format[i] == '%')
		{
			char_printed += conditions(specs, content, &format[i + 1]);
			n = 2;
		}
	}
	va_end(content);
	return (char_printed);
}
