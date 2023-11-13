#include "main.h"

/**
 * do_rot13_func - prints rot13'ed string
 * @data: va_list from _printf
 *
 * Return: count
*/
int do_rot13_func(va_list data)
{
	char *_rot_;
	int _i = 0, _j, count = 0;
	char *_alphas = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	_rot_ = va_arg(data, char *);
	if (_rot_ == NULL)
	{
		va_end(data);
		return (-1);
	}
	while (_rot_[_i] != '\0')
	{
		if (_rot_[_i] >= '0' && _rot_[_i] <= 9)
		{
			write(1, _rot_[_i], sizeof(_rot_[_i]));
			count++;
		} else
		{
			for (_j = 0; _alphas[_j] != '\0'; _j++)
			{
				if (_rot_[_i] == _alphas[_j])
				{
					if ((_rot_[_i] >= 'A' && _rot_[_i] <= 'M') ||
					(_rot_[_i] >= 'a' && _rot_[_i] <= 'm'))
					{
						custom_putchar(_rot_[_i] + 13);
						count++;
					}
					else if ((_rot_[_i] >= 'N' && _rot_[_i] <= 'Z') ||
					(_rot_[_i] >= 'n' && _rot_[_i] <= 'z'))
					{
						custom_putchar(_rot_[_i] - 13);
						count++;
					}
				}
			}
		}
		_i++;
	}
	return (count);
}
