#include "main.h"
/**
 * _islower - lower case alphabet
 *
 * @c: parameter to be printed
 *
 * Return: 1 when it is a lower case
 * and 0 when it is not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
