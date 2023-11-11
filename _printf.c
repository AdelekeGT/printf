#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: pointer to constant string
 *
 * Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int char_printed = 0, i, n = 0;
	va_list content;
	const char *character;

	if (format == NULL)
		return (-1);
	va_start(content, format);
	if (content == NULL)
		write(1, "NULL", sizeof("NULL") - 1);

	for (i = 0; format[i] != '\0'; i = i + n)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			char_printed++;
			n = 1;
		}
		else if (format[i] == '%')
		{
			character = &(format[i + 1]);
			if (*character == '\0' || *character == ' ')
				return (-1);
			char_printed += handle_c_s(character, content);
			n = 2;
		}
	}
	va_end(content);
	return (char_printed);
}
