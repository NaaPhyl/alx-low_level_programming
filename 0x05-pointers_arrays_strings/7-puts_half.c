#include "main.h"

/**
 *puts_half- print half
 *@str:checked
 *Return:nothing
 */

void puts_half(char *str)
{

	int i, n;

	i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	n = i / 2;
	while (n <= i)
	{
		puts_half(str);
		n++;

	}
	_putchar('\n');
}
