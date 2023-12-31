#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: The string to find a character in
  * @c: The character to find
  *
  * Return: pointer to first occurence of c if found.
  * NULL otherwise
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		i++;
	}

	if (s[i] == c)
	{
		return (s + i);
	}

	return (0);
}
