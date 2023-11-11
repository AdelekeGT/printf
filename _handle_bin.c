#include "main.h"

/**
 * _handle_bin - handles printing of binary
 * @list: va_list from _printf
 *
 * Return: count
*/
int _handle_bin(va_list list)
{
	unsigned int n_nbr;
	char bin_num[32];
	int i = 0, j;
	int count = 0;
	unsigned int nein = 0;

	n_nbr = va_arg(list, unsigned int);

	if (n_nbr == 0)
	{
		_putchar('0');
		return (1);
	}
	/*check for negative number*/
	if (n_nbr < nein)
		return (-1);

	/*convert integer to binary*/
	while (n_nbr > nein)
	{
		bin_num[i] = (n_nbr % 2) + '0';
		n_nbr /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bin_num[j]);
		count++;
	}

	return (count);
}
