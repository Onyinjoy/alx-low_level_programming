#include <stdio.h>
/**
 * main - the main function
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (i < j && j>= i)
			{
				putchar(i + '0');
				putchar(j + '0');
			}
			if (i >= j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 18)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}