#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* Function Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *str);
int print_uint(unsigned int n);
int print_binary(unsigned int n);
int print_int(int n);
int print_octal(unsigned int n);
int print_hex(unsigned int n);
int print_HEX(unsigned int n);
#endif /* MAIN_H */
