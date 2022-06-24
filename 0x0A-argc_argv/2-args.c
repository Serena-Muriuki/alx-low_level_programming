#include <stdio.h>

/**
 * main - prints all arguments.
 * @argc: number of arguments.
 * @argv: array of pointers.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
