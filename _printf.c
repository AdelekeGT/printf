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
		{"%c", _handle_ch},
		{"%s", _handle_str},
		{"%%", _handle_perc},
		{"%d", _handle_dec},
		{"%i", _handle_int},
		{NULL, NULL}
	};
	int char_printed = 0, i, n = 0;
	va_list content;

	va_start(content, format);
	if (content == NULL)
		write(1, "NULL", sizeof("NULL") - 1);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(content);
		return (-1);
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
