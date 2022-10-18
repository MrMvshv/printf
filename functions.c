#include "main.h"
/**prChar - prints  a char
  @a: list of arguments

Return: Number of chars printed
*/
int prChar(va_list *a)
{
	char *c = va_arg(*a, int);

	_putchar(c);

	return(1);
}

/**
  prPercent - prints percentage
  @a: list of arguments
Return: Number of chars printed
*/
int prPercent(va_list *a)
{
	char c = va_arg(*a, int);

	_putchar(c);

	return(1);
}

/**
  prString - prints a string
  @a: list of arguments
Return: Number of chars printed
*/
int prString(va_list *a)
{
	char *str;
	int i = 0;


	str = va_arg(*a, char *);

	while(str)
	{
		_putchar(*str);
		i++;
	}
	return (i);
}
