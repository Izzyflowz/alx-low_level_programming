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
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
