#include <stdio.h>
/**
 * main - main function of the program
 * @void: returns nothing
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			if (a == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
