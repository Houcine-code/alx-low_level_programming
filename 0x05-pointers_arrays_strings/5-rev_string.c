#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverses a string.
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char arr[1000];

	len = _strlen(s) + 1;
	j = len - 2;
	for (i = 0; i < len; i++)
	{
		arr[i] = *(s + j);
		j--;
	}
	j = len - 2;
	for (i = 0; i < len; i++)
	{
		*(s + j) = arr[j];
		j--;
	}
}
