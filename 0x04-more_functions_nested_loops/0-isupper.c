#include "main.h"

/**
* _isupper - check if a letter is uppercase
* @x: the number to be checked
* Return: 1 for uppercase letter or 0 for anything else
*/

int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
	return (1);
	}
	return (0);
}
