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
	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
        {
                putchar(i);
        }
	putchar('\n');
	return (0);
}
