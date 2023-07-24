#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int print_char(va_list list);
int print_str(va_list list);
int print_num(va_list list);
int print_bin(va_list list);
int print_oct(va_list list);
int print_hex(va_list list);
int print_HEX(va_list list);
int print_un(va_list list);
int print_reverse(va_list list);
int print_rot13(va_list list);
int print_S(va_list list);
int print_p(va_list list);
int get_funct(va_list list, char k, char c);

#endif /* MAIN_H */
