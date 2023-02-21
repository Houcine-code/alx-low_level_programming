#include "main.h"
#include <unistd.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: value of the last digit
 */
void times_table(void)
{
	int i, j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			c = i * j;
			write(1, &c, sizeof(c));
		}
		_putchar(10);

	}
}
