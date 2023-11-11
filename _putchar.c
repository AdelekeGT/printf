#include "main.h"

/**
 * _putchar - prints character
 * @ch: character to be printed
 *
 * Return: int
*/
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
