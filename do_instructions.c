#include "main.h"

/**
 * do_instructions - function handles format printing; finds out which
 * of the format specifiers in the spec struct matches format[1]
 * @specs: array of structs containing the specifier characters
 * and their corresponding functions
 * @data: va_list
 * @p: pointer to format character: format[1]
 *
 * Return: status
*/
int do_instructions(FormatSpecifier specs[], va_list data, const char *p)
{
	int i = 0, j;

	for (j = 0; specs[j].specifier != NULL; j++)
	{
		if (specs[j].specifier[1] == '\0')
			return (-1);

		if (*p == (specs[j].specifier[1]))
		{
			i += specs[j].handler(data);
			return (i);
		} else if (*p == '\0')
		{
			return (-1);
		}
	}

	write(1, "%", 1);
	write(1, p, 1);
	i += 2;
	return (i);
}

/*
* do_instructions function loops through the specs struct, and looks for
    which of the structs has a character that matches format[1]
* if it does not find a specifier character that matches,
    it prints the % and then prints format[1] directly
*/
