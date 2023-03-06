#include "main.h"

/**
 * _strlen - main function
 * @s: string lenght
 * Return: always s
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;

	return (a);
}
