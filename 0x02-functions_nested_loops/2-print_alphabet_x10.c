#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c:character to check if it islowercase
 * Return: 0-iflowercase, 1-ifnot
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
