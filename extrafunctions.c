#include "main.h"
/**
 * prIntB - recursive int printer
 * @n: int to print
 * Return: void
 */
void prIntB(int n)
{
	int m;

	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10 != 0)
	{
		prIntB(m / 10);
	}
	_putchar((m % 10) + '0');
}
