#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct specifier
{
	char *sym
	int (*p)(va_list);
}spec;


int _putchar(char c);
int _printf(const char *format, ...);

#endif
