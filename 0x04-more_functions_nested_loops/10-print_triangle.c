#include "main.h"
/**
 * print_triangle - main function that prints triangles
 * @size: size of the triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0 ; a < size ; a++)
	{
		for (b = 0 ; b < size ; b++)
		{
			if (b + 1 >= size - a)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
