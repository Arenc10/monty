#include "monty.h"
/**
 * _pint - Function that prints the value at the top element
 * @line: Second operand an int
 */
void _pint(stack **top, unsigned int line)
{
	if (*top != NULL)
		print("%i\n", (*top)->n);
	else
		print("Error\n")
}
