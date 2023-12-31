#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: The size of the triangle.
 *
 * If size is 0 or less, only a new line is printed.
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
_putchar(' ');

for (j = 0; j <= i; j++)
_putchar('#');

_putchar('\n');
}
}
