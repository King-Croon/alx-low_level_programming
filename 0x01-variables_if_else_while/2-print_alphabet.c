#include <stdio.h>
/**
 * main - entry point
 * description: print a-z
 * Return: 0
**/

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
