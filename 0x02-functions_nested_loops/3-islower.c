#include "main.h"
/**
 * _islower(int c)- function that check for lowercase character
 * @c: parametr to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
