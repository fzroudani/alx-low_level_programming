#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point of the program
 *
 * This function prompts the user for an integer and checks if it is
 * positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	/* your code goes there */
	for (i = '0'; i <= '7'; i++)
	{
		for (j = '1'; j <= '8'; j++)
		{
			for (k = '2'; k <= '9'; k++)
			{
				if (!(i < j && j < k))
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if(i == '7')
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
