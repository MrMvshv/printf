#include "main.h"

/**
 * _printf - prints like printf
 * @format: the format specifier and or normal string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	va_list vars;

	formspec fspec[] = {
		{"s", prString},
		{"c", prChar},
		{"%", prPercent},
		{'\0', NULL}
	};

	va_start(vars, format);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			i++;
			while (*fspec[j].type != '\0')
			{
				if (*fspec[j].type == format[i])
					fspec[j].func(&vars);
				else
					_putchar(format[i]);

				j++;
			}
		}
		i++;
	}
	return (0);
}
