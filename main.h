#ifndef _MAIN.H_
#define _MAIN.H_

#include <stdlib.h>
#include <stdarg.h>
int _putchar(char c);
int printf(const char *format, ...);
int print_char(va_list l);
int print_string(va_list l);
int print_int(va_list l);
int print_dec(va_list l);
int print_bin(va_list l);
int print_unsign(va_list l);
int print_octal(va_list l);
int print_hex(va_list l);
int print_hex_big(va_list l);
int print_rot13(va_list l);
int print_rev(va_list l);
int print_percent(va_list l);
int print_address(va_list l);
int get_flag(char s);
void print_number(int n);
int count_digit(int i);
char *convert(unsigned long int num, int base, int lowercase);
int print_string(va_list l);
int _puts(char *str);

/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /* _MAIN.H_ */
