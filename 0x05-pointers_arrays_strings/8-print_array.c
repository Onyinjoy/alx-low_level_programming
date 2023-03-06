#include "main.h"
#include <stdio.h>

/**
 * print_array - main function
 * @a: input array.
 * @n: input n
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
