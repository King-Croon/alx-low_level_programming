#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the products of two values
 * @argv: argument value
 * @argc: Counts argument
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
