#include "holberton.h"

/**
* _strcmp - Compaires two strings to pointers.
* @s1: string one.
* @s2: string two.
* Return: If str1 < str2. the negaitive diffrence of the first unmatched characters.
* If str1 == str2, 0.
* If str1 > str2, the positive diffrence of the first unmatched characters.
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
