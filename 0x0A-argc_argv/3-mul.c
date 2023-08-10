#include <stdio.h>
#include "main.h"
/**
 * main - prints the products of two values
 * @argv: argument value
 * @argc: Counts argument
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if(argc > 1)
	{
		int s1 = atoi(argv[1]);
		int s2 =atoi( argv[2]);
		printf("%d\n", s1*s2);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
