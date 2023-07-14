#include <stdio.h>
/**
 * main - entry point
 * Description: print all alphabet except
 * Return: 0
**/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q')
		{
			continue;
		}
		else if (i == 'e')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
