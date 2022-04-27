#include <stdio.h>

/**
  * main - prints some letters of alphabet except e and q
  *
  * Return: Always (Success)
  */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}

	putchar('\n');

	return (0);
}
