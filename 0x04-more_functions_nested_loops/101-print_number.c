#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_numbers(int n)
{
unsigned int n1;

if (n < 0)
{
n1 = -n;
putchar('-');
} else
{
n1 = n;
}

if (n1 / 10)
{
print_numbers(n1 / 10);
}

putchar((n1 % 10) + '0');
}
