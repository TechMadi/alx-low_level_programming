#include <stdio.h>

/**
 * main - Prints the alphabets  in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
