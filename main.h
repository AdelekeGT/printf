#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char ch);
int handle_c_s(const char *ch, va_list list);
int print_decimal(va_list list);
int print_integer(va_list list);

#endif
