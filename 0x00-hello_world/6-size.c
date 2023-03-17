#include <stdio.h>
/**
 * main - Entry point
 * C program that prints the size of various types
 * on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */
int main(void)
	{char characterSize;
	int integerSize;
	long int longIntegerSize;
	long long int longLongInteger;
	float floatSize;

	printf("Size of a char: %ld byte(s)\n", sizeof(characterSize));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerSize));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntegerSize));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongInteger));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatSize));
	return (0); }
