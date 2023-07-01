#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int putchr(char y);
int _printf(const char *format, ...);
int add_str(char *str);
int conv_str(int num);
int conv_bin(int num);
int unsgnd_digit(unsigned int num);
int unsgnd_oct(unsigned int num);
int unsgnd_hex_low(unsigned int num);
int unsgnd_hex_up(unsigned int num);
int write_buffer(char *buffer);

#endif
