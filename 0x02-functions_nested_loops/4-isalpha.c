#include "main.h"

/**
 * _isalpha - main function of the program
 * @c: parameter of the program
 * Return: 1 when it is a letter or lowercase or upper case
 * and 0 when otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
