#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list l);
int print_string(va_list l);
int print_int(va_list l);
int print_dec(va_list l);
int print_bin(va_list l);
int print_unsign(va_list l);
int print_octal(va_list l);
int print_hex(va_list l);
int print_HEX(va_list l);
int print_rot13(va_list l);
int print_rev(va_list l);
int print_percent(va_list l);
int print_address(va_list l);
int get_flag(char s);
void print_number(int n);
int count_digit(int i);
char *convert(unsigned long int num, int base, int lowercase);
int print_SRN(va_list l);
int _puts(char *str);

/**
  * struct structPrint - Structure definition
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct structPrint
{
	char *sc;
	int (*f)(va_list);
} structPrint;

#endif /* _MAIN.H_ */
