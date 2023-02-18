#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
* _sqrt_recursion - Returns the natural square root of a mumber
* @n: the number to calculate the natural square root
*
* Return: the natural square root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n,1));
}

/**
* _sqrt - Calculates natural square root
* @n: number to calculate the sqare root
* @1: iterare number
*
* Return: the natural square root
*/

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
