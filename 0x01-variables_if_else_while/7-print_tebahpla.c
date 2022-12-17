#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns all alphabets except e and q
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
