#include <stdio.h>
#include "main.h"

/*
 * main: prints argument count
 * @argc: count of arguments
 * @argv: values of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
