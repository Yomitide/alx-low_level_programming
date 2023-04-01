#include <stdio.h>
void __attribute__((constructor))tortoise(void);
/**
 * tortoise - print a string
 * Return: 0
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
