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
	/* your code goes there */
	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
