#include "main.h"

/**
 *puts_half- print half
 *@str:checked
 *Return:nothing
 */

void puts_half(char *strn)
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
		_putcha`r(str[n]);
		n++;

	}
	_putchar('\n');
}
