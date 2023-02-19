#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 5; digit1++)
	{
	for (digit2 = digit1 + 1; digit2 < 6; digit2++)
	{
	for (digit3 = digit2 + 1; digit3 < 7; digit3++)
	{
		putchar((digit1 % 10) + '0');
		putchar((digit2 % 10) + '0');
		putchar((digit3 % 10) + '0');
	if (digit1 == 4 && digit2 == 5 && digit3 == 6)
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
