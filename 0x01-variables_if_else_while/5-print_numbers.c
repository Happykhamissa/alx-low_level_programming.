#include <stdio.h>

/**
 * main - Prints all digit numbers of the base 10 starting from 0
 * Return: Always 0
 */

int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
