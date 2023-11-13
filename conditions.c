#include "main.h"

/**
 * conditions - conditions for format handling
 * @s: struct
 * @list: va_list
 * @p: pointer to format specifier character
 *
 * Return: status
*/
int conditions(struct the_formats s[], va_list list, const char *p)
{
	int i = 0, j;

	for (j = 0; s[j].ch_ptr != NULL; j++)
	{
		if (s[j].ch_ptr[1] == '\0')
			return (-1);

		if (*p == (s[j].ch_ptr[1]))
		{
			i += s[j].spec_func(list);
			break;
		} else if (*p == '\0')
		{
			return (-1);
		} else if (*p != (s[j].ch_ptr[1]) && *p != '\0')
		{
			write(1, p, 1);
			i++;
			break;
		}
	}
	return (i);
}
