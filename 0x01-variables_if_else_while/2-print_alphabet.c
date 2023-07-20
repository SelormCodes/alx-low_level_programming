#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * then follows with a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
