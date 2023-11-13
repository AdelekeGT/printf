#include "main.h"

/**
 * do_binary - handles printing of binary
 * @data: va_list from _printf
 *
 * Return: count
*/
int do_binary(va_list data)
{
	unsigned int num_nbr;
	char bin_bin[32];
	int i = 0, j;
	int count = 0;
	unsigned int nein = 0;

	num_nbr = va_arg(data, unsigned int);

	if (num_nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	/*check for negative number*/
	if (num_nbr < nein)
		return (-1);

	/*convert integer to binary*/
	while (num_nbr > nein)
	{
		bin_bin[i] = (num_nbr % 2) + '0';
		num_nbr /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &bin_bin[j], sizeof(bin_bin[j]));
		count++;
	}

	return (count);
}
