#include "main.h"

/**
  * spaces - prints spaces in a tringle of n length
  * @n: length of triangle
  *
  */

void spaces(int n)
{
	int s = n - 1;
	int y = 0;

	while (y < s)
	{
		_putchar(' ');
		y++;
	}
}

/**
  * hashes - prints x hashes in a triangle
  * @x: number of hashes to print
  */

void hashes(int x)
{
	int y = 0;

	while (y < x)
	{
		_putchar('#');
		y++;
	}
}

/**
  * print_triangle - prints a triangle of n length
  * @n: length of triangle to print
  */

void print_triangle(int n)
{
	int x = 1;
	int w = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	while (w < n)
	{
		spaces(n);
		hashes(x);
		_putchar('\n');
		x++;
		n--;
	}
}
