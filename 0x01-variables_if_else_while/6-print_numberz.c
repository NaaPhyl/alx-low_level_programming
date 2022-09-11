#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
