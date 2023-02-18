#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable and each time it is executed print the last digit of the number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	print("last digit of %d is %d", n, x);
	if (x > 5)
	{
	print("and is greater than 5");
	}
	if (x == 0)
	{
	print("and is 0");
	}
	{
	printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
