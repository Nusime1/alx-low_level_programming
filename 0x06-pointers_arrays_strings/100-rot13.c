#include "main.h"

/**
 * *rot13 - Entry point
 * Description: Encodes a string using rot13
 * @str: Character
 * Return: char
 */

char *rot13(char *str)
{
	char *p = str;
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			p[i] = (((str[i] - 'a') + 13) % 26) + 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			p[i] = (((str[i] - 'A') + 13) % 26) + 'A';
		}
		else
		{
			p[i] = str[i];
		}
	}
	return (p);
}
