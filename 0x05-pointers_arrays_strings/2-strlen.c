#include "main.h"

/**
  * _strlen - calculates the length of a string
  * @s: the string to calculate the length of
  *
  * Return: Length of string s
  */

int _strlen(char *s)
{
	int str[] = *s;

	int chars = sizeof(str) - sizeof(char);

	return (chars);
}
