#include "main.h"

int bandersnatch(char *s1, char *s2);
char *move(char *s2);

/**
 * wildcmp - compares two strings recursively,
 * checking for wildcards expansion
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 1 if the strings can be considered identical
 * otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
		return (*s1 != '\0' && wildcmp(s1 +1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1!= '\0' && wildcmp(s1 + 1, s2)));
	return (0);
}
