#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

struct specifier
{
	char *sym;
	int (*p)(va_list);
};

typedef struct specifier spec;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);

#endif
