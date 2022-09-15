#include <stdio.h>

/**
 * main - program that prints Holberton.
 *
 * Return: int
 */

int main(void)
{
int n = 0;
char ptchar[8] = "_putchar";

while (n < 8)
{
_putchar(ptchar[n]);
n++;
}
_putchar('\n');
return (0);
}
