#include <stdio.h>
#include "main.h"

/**
 * main - prints program name, followed by a new line
 * @argc: numbur of arguments
 * @argv: array of argumrnts
 *
 * Return: always 0 (success)
 */
int main(char argc__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
