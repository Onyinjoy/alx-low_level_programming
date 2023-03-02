#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: parameter to check
 * Return: always k
 */
int print_last_digit(int c)
{
	int d;

	d = c % 10;
	if (c < 0)
		d = -(d);
	_putchar(d + '0');
	return (d);
}
