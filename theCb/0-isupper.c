#include "main.h"

/**
 * _isupper - checks if the alphabet is uppercase and prints 1 else 
 * it prints 0
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
