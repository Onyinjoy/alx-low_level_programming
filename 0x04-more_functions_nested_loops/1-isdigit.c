#include "main.h"
/**
 * _isdigit - main function of the program
 * @c: parameter to be checked
 * Return: always 1 if digit
 * and o otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
