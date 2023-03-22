#include "main.h"

/**
 * -abs - function that computes the absolute
 *	 value of an integer 
 *
 * @n: takes in integer type input for function
 *
 * Return: Always 0 (success)
*/

int _abc(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
