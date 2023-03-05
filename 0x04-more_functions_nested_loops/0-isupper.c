#include "main.h"
/**
 * _isupper - the main function of the program
 * @c: parameter to be checked
 * Return: 1 if upper case
 * and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
