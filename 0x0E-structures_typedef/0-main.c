#include <stdio.h>
#include "dog.h"

/**
 * main - check the code 
 * Return: Always 0.
 */

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Kiki";
	my_dog.age = 5.2;
	my_dog.owner = "Naa";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);

	return (0);
}
