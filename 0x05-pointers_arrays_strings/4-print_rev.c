#include "main.h"
#include <stdio.h>

/**
* print_rev - Prints in reverse
* @s: The string that it prints
* Return: void
*/

void print_rev(char *s)

{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}
	
	for (c -= 1; >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
