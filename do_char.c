#include "main.h"

/**
 * do_char - handles anything enclosed in single quotes passed in
 * @data: represents the list of arguments from va_list
 *
 * Return: count
*/
int do_char(va_list data)
{
	char a_char;
	int count = 0;

	a_char = va_arg(data, int);
	write(1, &a_char, 1);
	count++;

	return (count);
}
