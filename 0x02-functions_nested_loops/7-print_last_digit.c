#include "main.h"
/**
 * print_last_digit - get the last digit of a number
 *
 * @r: int input
 * Description: pring with _putchar
 *
 * Return: last digit of r
 */
int print_last_digit(int r)
{
	int a;

	if (r < 0)
	{
		a = -1 * (r % 10);
	}
	else
	{
		a = r % 10;
	}
	_putchar((a % 10) + '0');
	return (a % 10);
}
