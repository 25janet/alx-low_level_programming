#include "main.h"
/**
 * function that prints the numbers, from 0 to 9, followed by a new line
 *
 * return always - 0
 */
void print_numbers(void)
int _putchar(int c);	
{
	int c ;
	for (c = 0; c <= 9; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
