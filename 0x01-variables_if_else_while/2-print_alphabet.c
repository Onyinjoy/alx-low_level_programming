#include <stdio.h>

/**
 * main - main function of the program
 * Return: always 0
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
