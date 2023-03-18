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
	/* your code goes there */
	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i == j || i > j)
			{
				continue;
			}
			
			putchar(i);
			putchar(j);
			if(i == 56 && j == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
