#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 * struct form - parameters
 * @type: format specifier
 * @func: function
 */
typedef struct form
{
	char type;
	int (*func)(char *, va_list, int);
} formspec;

int _putchar(char c);
int _printf(const char *format, ...);
int print_buff(char *buff, unsigned int nbuff);
int prChar(char *buff_dest, va_list vars, int buff_count);
int prString(char *buff_dest, va_list vars, int buff_count);
int prPercent(char *buff_dest, va_list vars, int buff_count);
int prInt(char *buff_dest, va_list vars, int buff_count);

void prIntB(int n, char *buff_dest, int buff_count);
#endif
