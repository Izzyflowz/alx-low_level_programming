#include <stdio.h>
/**
 * main-entey point
 * Return: Always 0
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (ones = '0'; ones <= '9'; ones++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			if  (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
