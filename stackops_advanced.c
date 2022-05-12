#include "monty.h"
/**
 * _swap - Function that swap top two elemnts of stack
 * @top: First node
 * @line: Second operand
 */
void _swap(stack_t **top, unsigned int line)
{
	int temp;

	if (*top == NULL || (*top)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = (*top)->n;
		(*top)->n = (*top)->next->n;
		(*top)->next->n = temp;
	}
}
/**
 * _nop - Function that does nothing
 * @top: First node
 * @line: Unsigned int
 */
void _nop(stack_t **top, unsigned int line)
{
	(void) top;
	(void) line;
}
/**
 * _pchar - Function that prints first char of the top
 * @top - First operand node
 * @line - Second operand
 */
void _pchar(stack_t **top, unsigned int line)
{
	int asci;
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	asci = (*top)->n;
	if (asci < 0 || asci > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line);
		exit(EXIT_FAILURE);
	}
	putchar(asci);
	putchar('\n');
}
/**
 * _pstr - Function that prints a string
 * @top - First operand top node
 * @line - Second operand
 */
void _pstr(stack_t **top, __attribute__((unused)) unsigned int line)
{
	int asci;
	stack_t *temp;

	if (*top == NULL)
	{
		putchar('\n');
		return;
	}
	temp = *top;
	while (temp != NULL)
	{
		asci = temp->n;
		if (asci <= 0 || asci > 127)
			break;
		putchar(asci);
		temp = temp->next;
	}
	putchar('\n');
}
