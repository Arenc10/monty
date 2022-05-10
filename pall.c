#include "monty.h"
/**
 * _pall - Function that prints all elements of a stack
 * @top: First element of a stacked list
 * @line: Second element a value
 */
void _pall(stack_t **top, __attribute__((unused))unsigned int line)
{
	while (*top != NULL)
	{
		printf("%i\n", (*top)->n);
		*top = (*top)->next;
	}
}
