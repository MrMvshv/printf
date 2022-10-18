#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

typedef struct form{
	char *type;
	int (*func)(va_list *a);
} formspec;

int _putchar(char c);
int _printf(const char *format, ...);

int prString(va_list *a);
int prChar(va_list *a);
int prPercent(va_list *a);
#endif
