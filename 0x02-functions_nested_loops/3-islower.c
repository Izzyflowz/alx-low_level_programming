#include "main.h"
/**
 * _islower - check for lowercase characters
 *
 * Description: print using _putchar
 * @c: collect alphabets
 *
 * Return: (1) if c is lowercase otherwise (0)
 *
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		lower = 1;
		}
	}
	return (lower);
}
