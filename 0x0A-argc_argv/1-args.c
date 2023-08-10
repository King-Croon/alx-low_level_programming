#include <stdio.h>
#include "main.h"

/*
 * main: prints name of argumentr
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
