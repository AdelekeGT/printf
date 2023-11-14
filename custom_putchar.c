#include "main.h"

/**
 * custom_putchar - prints single character to stdout
 * @ch: character to be printed
 *
 * Return: int
*/
int custom_putchar(char ch)
{
	return (write(1, &ch, 1));
}
