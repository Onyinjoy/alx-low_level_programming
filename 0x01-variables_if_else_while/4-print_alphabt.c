#include <stdio.h>

/**
 * main - the main function of the program
 * Return: always 0
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
