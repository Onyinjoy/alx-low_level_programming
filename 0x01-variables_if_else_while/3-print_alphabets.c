#include <stdio.h>

/**
 * main - start the program prints alphabets lower and upper case
 * Return: success 0
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	for (c = 'A' ; c <= 'Z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
