#include <stdio.h>

/**
  * main - Prints  lowercase  alphabet at reverse
  *
  * Return: Always (Success)
  */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
