#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print single digit numbers in the format
 *
 * Description: Separated by commas
 * Return: Always(0) Success
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(" ");
			
		}
	}
	putchar('\n');
	return (0);
}
