#include "main.h"

/**
 * _printf - prints like printf
 * @format: the format specifier and or normal string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i = 0, j = 0;
	va_list vars;

	formspec fspec[] = {	{"s", prString}, {"c", prChar}, {"%", prPercent},
				{"d", prDouble}, {"i", prInt}, {'\0', NULL}};

	va_start(vars, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (fspec[j].type)
			{
				if (*fspec[j].type == format[i])
				{
					fspec[j].func(&vars);
					count++;
					j = 0;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	return (count);
}
