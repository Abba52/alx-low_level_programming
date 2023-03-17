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

	printf("Size of character is: %ld bytes\n", sizeof(characterSize));
	printf("Size of int is: %ld bytes\n", sizeof(integerSize));
	printf("Size of long int is: %ld bytes\n", sizeof(longIntegerSize));
	printf("Size of long long int is: %ld bytes\n", sizeof(longLongInteger));
	printf("Size of float is: %ld bytes\n", sizeof(floatSize));
	return (0); }
