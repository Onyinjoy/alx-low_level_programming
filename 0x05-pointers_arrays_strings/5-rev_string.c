#include <stdio.h>
#include "main.h"

/**
 *rev_string - main function
 *@s: value to be evaluated
 *Return: no return
 */

void rev_string(char *s)
{
	char a;
	int b, c, d;

	c = 0;
	d = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	d = c - 1;

	for (b = 0; b < c / 2; b++)
	{
		a = s[b];
		s[b] = s[d];
		s[d--] = a;
	}
}
