#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n characters.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of characters to concatenate from s2.
 *
 * Return: a pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (k >= n)
		k = n;

	l = i + k;

	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j < i)
			str[j] = s1[j];
		else
			str[j] = s2[k++];

		j++;
	}

	str[j] = '\0';
	return (str);
}

