#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

typedef struct form{
	char *type;
	void (*func)(va_list *a);
} formspec;

int _putchar(char c);
int _printf(const char *format, ...);

void prString(va_list *a);
void prChar(va_list *a);
void prPercent(va_list *a);
#endif
