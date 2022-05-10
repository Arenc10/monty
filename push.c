#include "monty.h"
/**
 * _push - Function that inserts a new node in the beginning of a list
 * @top: First operand pointer to pointer
 * @line: Secnd operand an int
 */
void _push(stack_t **top, __attribute__((unused))unsigned int line)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		printf("Error\n");
	new->n = value;
	new->prev = NULL;

	if (*top == NULL)
	{
		new->next = NULL
		*top = new;
	else
	{
		new->next = *top;
		(*top)->prev = new;
		*top = new;
	}
}
