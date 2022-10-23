#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
/**
 * prinlint - prints a long integer
 * @vars: arguments
 * @buff_dest: buffer pointer
 * @buff_count: index for buffer pointer
 * Return: number of chars printed.
 */
int prinlint(va_list vars, char *buff_dest, unsigned int buff_count)
{
	long int int_input;
	unsigned long int int_in, int_temp, i, div, isneg;

	int_input = va_arg(vars, long int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		buff_dest[buff_count] = '-';
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		buff_dest[buff_count] = (((int_in / div) % 10) + '0');
	}
	return (i + isneg);
}

