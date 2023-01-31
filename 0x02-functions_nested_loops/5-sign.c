#include "main.h"

/**
* print_sign - prints the sign of a number
* @c: the number to be checked
* Return: 1 for positive n , -1 for negative n or zero for anything
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
