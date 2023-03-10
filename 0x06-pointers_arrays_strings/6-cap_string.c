#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: string to capitalize
 * Return: string capitalized.
 */

char *cap_string(char *str)
{
	int i = 0, j = 0;
	char separators[] = ",;.!?\"(){}\n\t ";

	/* capitalize first word*/
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	/* iterate until null */
	while (str[j] != '\0')
	{
		/* check if character str[j] is a separator */
		while (str[j] != separators[i] && i < 12)
		{
			i++;
		}
		if (str[j] == separators[i])
		{
			/* if it s a sepa print it */
			/* printf("%d\n",str[j]);*/
			/* if whats next is letter */
			if ((str[j + 1] >= 65 && str[j + 1] <= 90) ||
					(str[j + 1] >= 97 && str[j + 1] <= 122))
			{
				/* if whats next is lower*/
				if (str[j + 1] >= 97 && str[j + 1] <= 122)
				{
					/* upper it */
					str[j + 1] = str[j + 1] - 32;
				}
			}
		}
		/* reset count through sepa */
		i = 0;
		j++;
	}
	return (str);
}
