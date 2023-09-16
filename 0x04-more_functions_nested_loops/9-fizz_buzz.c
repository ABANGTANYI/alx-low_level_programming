#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100 with Fizz-Buzz rules
 *              Multiples of 3 are replaced with "Fizz"
 *              Multiples of 5 are replaced with "Buzz"
 *              Multiples of both 3 and 5 are replaced with "FizzBuzz"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
