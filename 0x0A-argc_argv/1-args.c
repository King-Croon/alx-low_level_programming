#include <stdio.h>
#include "main.h"
/*
 * main - prints argument count
 * @argc: count of arguments
 * @argv: values of arguments
 * Return: (0) success always
 * */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc -1);
	return (0);
}
