#include "main.h"

/**
 * do_instructions - conditions for format handling
 * @specs: struct
 * @data: va_list
 * @p: pointer to format specifier character
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
