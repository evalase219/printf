#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int putchr(char y);
int _printf(const char *format, ...);
int add_str(char *str);
int conv_str(int num);
int conv_bin(int num);

#endif
