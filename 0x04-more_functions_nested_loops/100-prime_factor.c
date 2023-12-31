#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @num: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number.
 */
unsigned long largest_prime_factor(unsigned long num)
{
unsigned long i;

while (num % 2 == 0)
num /= 2;

for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
num /= i;
}

return (num > 2 ? num : i - 2);
}
/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the largest prime factor of the number
 *              612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long number = 612852475143;
unsigned long largest_prime;

largest_prime = largest_prime_factor(number);

printf("%lu\n", largest_prime);
return (0);
}
