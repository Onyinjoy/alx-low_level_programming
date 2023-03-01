#include "main.h"

/**
 * print_sign - prints signs
 *
 * @n: parameter of the program
 *
 * Return: 1 when it is greater than and o when it is zero
 * or negative when it is less than
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
