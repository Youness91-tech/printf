#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUFF_SIZE 1024
#define BUFF_FLUSH -1

#define NUL_STRING "(null)"

#define PARAMS_INIT (0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2

int _printf(const char *format, ...);
int _putchar(char c);
int (*get_func(char ch))(va_list);
/****************** FUNCTIONS ******************/
int print_ch(va_list list);
int print_str(va_list list);
int print_prct(va_list list);
int print_nan(char ch1, char ch2);
int print_int(va_list list);
int print_bin(va_list list);
int print_oct(va_list list);
int print_hex(va_list list);
int print_Hex(va_list list);
int print_SS(va_list list);
int print_pp(va_list list);
int print_unsigned(va_list list);
unsigned int base_len(unsigned int num, int base);
int *rev_str(char *s);
char *hex_conv(int num);
void _write(buffer *b_r, char c);
void _write_str(buffer *b_r, char *s);
void _write_tmpbuf(buffer *b_r);
int print_rr(va_list list);

#endif

