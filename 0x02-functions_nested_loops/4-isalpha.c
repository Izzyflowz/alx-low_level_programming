#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * Description: print using _putchar
 *
 * @c: collect the character
 *
 * Return: 1 if c is low or cap otherwise 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = '0';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == 'C')
			{
				letter = 1;
			}
		}
	}
	return (letter);
}