#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 *@c: parameter considered
 *
 * Return: the absolute value of c
 */

int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else
		c = c;
	return (c);
}
