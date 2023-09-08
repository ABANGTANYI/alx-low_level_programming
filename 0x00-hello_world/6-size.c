#include <stdio.h>
/**
 * main - function
 *
 * Return: 0 on sucess
 */
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu bytes(s)", sizeof(long int));
	printf("size of a long long int: %zu  byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
