#include "main.h"
/**
 * powA - returns power
 * @x: x
 * @y: to power y
 * Return: power
 */
int powA(int x, int y)
{
	int result, i = 0;

	while (i < y)
	{
		result *= x;
		i++;
	}
}
