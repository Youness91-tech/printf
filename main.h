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

/****************** FUNCTIONS ******************/
int print_ch(va_list character);
int print_str(va_list string);
int print_prct(va_list percent);
int print_int(va_list integer);

#endif

