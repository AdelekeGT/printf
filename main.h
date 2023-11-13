#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct FormatSpec - struct for formats
 * @specifier: pointers to the character specifiers
 * @handler: functions for handling the specifiers
*/
typedef struct FormatSpec
{
	const char *specifier;
	int (*handler)(va_list);
} FormatSpecifier;

int _printf(const char *format, ...);
int do_instructions(FormatSpecifier specs[], va_list data, const char *p);
int custom_putchar(char ch);
int do_char(va_list data);
int do_string(va_list data);
int do_percent(va_list data);
int do_decimal(va_list data);
int do_integer(va_list data);
int do_binary(va_list data);
int do_unsigned_decimal(va_list data);
int helper_print_decimal_reverse(unsigned int number);
int do_octal(va_list data);
int helper_print_octal_reverse(unsigned int number);
int do_hexadecimal(va_list data);
int helper_print_hexadecimal_reverse(unsigned int number);
int do_hexadecimal_upper(va_list data);
int helper_print_hexadecimal_upper_reverse(unsigned int number);
int do_reverse_string(va_list data);
int do_non_printable(va_list ldata);
int do_pointer_address(va_list data);
int do_rot13_func(va_list data);

#endif
