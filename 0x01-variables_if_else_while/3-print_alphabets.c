#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{char alphabet;
char alphabetUpper;
alphabet = 'a';
alphabetUpper = 'A';
while (alphabet <= 'z')
{putchar(alphabet);
	alphabet++; }
while (alphabetUpper <= 'Z')
{putchar(alphabetUpper);
	alphabetUpper++; }
	putchar('\n');
	return (0); }
