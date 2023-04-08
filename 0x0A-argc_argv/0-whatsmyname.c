#include <stdio.h>
#include "main.h"
/**
 * main - prints program name, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(char argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
