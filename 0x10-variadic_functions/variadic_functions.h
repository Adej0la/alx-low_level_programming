#ifndef VARDIC_FUNC
#define VARDIC_FUNC

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct op
{
	char *ch;
	void (*f)(va_list);
} op_t;
void _print_char(va_list arg);
void _print_int(va_list arg);
void _print_dbl(va_list arg);
void _print_str(va_list arg);

#endif
