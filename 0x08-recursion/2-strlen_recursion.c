#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
		i++;
	return (i);
}