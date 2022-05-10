#include "monty.h"
/**
 * _push - Function that inserts a new node in the beginning of a list
 * @top: First operand pointer to pointer
 * @line: Secnd operand an int
 */
void _push(stack_t **top, unsigned int line)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	new->n = line;
	new->prev = NULL;

	if (*top == NULL)
		new = *top;
	else
	{
		new->next = *top;
		(*top)->prev = new;
		new = *top;
	}
}
