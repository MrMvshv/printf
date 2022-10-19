#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * struct form - type and corresponding function
 * @type: format specifier
 * @func: corresponding function
 */
typedef struct form
{
	char *type;
	int (*func)(va_list *a);
} formspec;

int _putchar(char c);
int _printf(const char *format, ...);


void prIntB(int n);

int prString(va_list *a);
int prChar(va_list *a);
int prPercent(va_list *a);
int prInt(va_list *a);
int prDouble(va_list *a);
#endif
