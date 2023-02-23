#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 *
 * Return: ...
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			if (!((d == 2) && (b > 3)))
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
}
