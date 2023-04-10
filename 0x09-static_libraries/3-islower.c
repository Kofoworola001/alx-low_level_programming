#include "main.h"

/**
 * _islower - checks for lowercase alphabet
 *
 * @c: parameter to be checked
 *
 * Return: return 1 if it's an alphabet else return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
