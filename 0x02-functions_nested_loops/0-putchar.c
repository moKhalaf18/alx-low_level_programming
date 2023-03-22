#include <main.h>

/**
 * main  - Entry point
 *
 * description: 'prints _putchar to stdout'
 *
 * Return: always 0
 */

int main(void) 
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n')

	return (0);	

}


