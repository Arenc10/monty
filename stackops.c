#include "monty.h"
int num;
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
	new->n = num;
	new->prev = NULL;

	if (*top == NULL)
	{
		new->next = NULL;
		*top = new;
	}
	else
	{
		new->next = *top;
		(*top)->prev = new;
		*top = new;
	}
}
/**
 * _pall - Function that prints all elements of a stack
 * @top: First element of a stacked list
 * @line: Second element a value
 */
void _pall(stack_t **top, __attribute__((unused))unsigned int line)
{
	stack_t *tmp = *top;
	while (tmp != NULL)
	{
		printf("%i\n", (tmp)->n);
		tmp = tmp->next;
	}
}
/**
 * _pint - Function that prints the value at the top element
 * @top
 * @line: Second operand an int
 */
void _pint(stack_t **top, __attribute__((unused))unsigned int line)
{
	if (*top != NULL)
		printf("%i\n", (*top)->n);
	else
		printf("Error\n");
}
/**
 *_pop - function that deletes the top element
 *@top - First operand top of the stack
 *@line: Second operand int
 */
void _pop(stack_t **top, __attribute__((unused)) unsigned int line)
{
	stack_t *temp = *top;

	if (*top == NULL)
		printf("Error\n");
	temp = temp->next;
	free(*top);
	*top = temp;
}
/**
 * _free - Function that frees elements of a stack
 * @top: First operand
 */
void _free(stack_t *top)
{
	stack_t *temp;

	if (top == NULL)
		return;
	while (top != NULL)
	{
		temp = top;
		top = (top)->next;
		free(temp);
	}
	free(top);
}
