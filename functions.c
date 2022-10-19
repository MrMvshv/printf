#include "main.h"
/**
 * prChar - prints  a char
 * @a: list of arguments
 *
 * Return: Number of chars printed
*/
int prChar(va_list *a)
{
	char c = (char)va_arg(*a, int);

	_putchar(c);
	return (1);
}


/**
 * prDouble - prints  a float (double)
 * @a: list of arguments
 *
 * Return: Number of chars printed
*/
int prDouble(va_list *a)
{
	double c = va_arg(*a, double);

	_putchar(c);
	return (1);
}

/**
 * prInt - prints an int
 * @a: list of arguments
 *
 * Return: number of digits printed
 */
int prInt(va_list *a)
{
	int n, count = 0;

	n = va_arg(*a, int);
	prIntB(n);
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
/**
 * prPercent - prints percentage
 * @a: list of arguments
 *
 * Return: Number of chars printed
*/
int prPercent(va_list *a)
{
	char c = (char)va_arg(*a, int);

	c = '%';
	_putchar(c);

	return (1);
}

/**
 * prString - prints a string
 * @a: list of arguments
 *
 * Return: Number of chars printed
*/
int prString(va_list *a)
{
	char *str;
	int i = 0;


	str = va_arg(*a, char *);

	while (str[i] != '\0')
	{
		_putchar(*str);
		i++;
	}
	return (i);
}
