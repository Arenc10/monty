#include "monty.h"
/**
 * _all - Function that prints all elements of a stack
 * @top: First element of a stacked list
 * @line: Second element a value
 */
void _all(stack_t **top, unsigned int line)
{
	while (*top != NULL)
	{
		printf("%i\n", (*top)->n);
		*top = (*top)->next;
	}
}
