#include <stdio.h>
/**
 * bmain - function executed before main
 * Return: no return.
 */
void __attribute__((constructor)) bmain()01~
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
