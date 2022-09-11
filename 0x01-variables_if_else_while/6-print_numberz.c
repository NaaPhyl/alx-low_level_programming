#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p;

	for (p = 0; p < 100; p++)
	{
		putchar((p / 10) + '0');
		putchar((p % 10) + '0');
		if (p != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
