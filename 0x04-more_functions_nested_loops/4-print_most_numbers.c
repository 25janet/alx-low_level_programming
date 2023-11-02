#include "main.h"

/**
 *  function that prints the numbers, from 0 to 9, followed by a new line.
 *  Do not print 2 and 4
 *  return
 */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
	if(x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x);
	}
	}
	_putchar('\n');
}
