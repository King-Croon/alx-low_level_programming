#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * description - print all single digit of base 10
 * starting from 0, followed by a newline
 * return 0
**/

int main(void)
{
	int m = '0';
	
	for (; m <= '9'; m++)
	{
		putchar(m);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
