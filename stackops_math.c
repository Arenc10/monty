#include "monty.h"
/**
 * _add - Function that adds values of two nodes
 * @top: First node
 * @line: second operand int
 */
void _add(stack_t **top, unsigned int line)
{
        stack_t *temp;

        if (*top == NULL || (*top)->next == NULL)
        {
                printf(stderr, "L%u: can't add, stack too short");
                exit(EXIT_FAILURE);
        }
        else
        {
                temp = (*top)->next;
                temp->n += (*top)->n;
                _pop(top, line);
        }
}
/**
 * _sub - Function that adds values of two nodes
 * @top: First node
 * @line: second operand int
 */
void _sub(stack_t **top, unsigned int line)
{
        stack_t *temp;

        if (*top == NULL || (*top)->next == NULL)
        {
                printf(stderr, "L%u: can't sub, stack too short");
                exit(EXIT_FAILURE);
        }
        else
        {
                temp = (*top)->next;
                temp->n -= (*top)->n;
                _pop(top, line);
        }
}
/**
 * _mul - Function that adds values of two nodes
 * @top: First node
 * @line: second operand int
 */
void _mul(stack_t **top, unsigned int line)
{
        stack_t *temp;

        if (*top == NULL || (*top)->next == NULL)
        {
                printf(stderr, "L%u: can't mul, stack too short");
                exit(EXIT_FAILURE);
        }
        else
        {
                temp = (*top)->next;
                temp->n *= (*top)->n;
                _pop(top, line);
        }
}
/**
 * _div - Function that adds values of two nodes
 * @top: First node
 * @line: second operand int
 */

void _div(stack_t **top, unsigned int line)
{
        stack_t *temp;

        if (*top == NULL || (*top)->next == NULL)
        {
                printf("L<line_number>: can't add, stack too short");
                exit(EXIT_FAILURE);
        }
        else
        {
                temp = (*top)->next;
                temp->n /= (*top)->n;
                _pop(top, line);
        }
}
/**
 * _mod - Function that adds values of two nodes
 * @top: First node
 * @line: second operand int
 */

void _mod(stack_t **top, unsigned int line)
{
        stack_t *temp;

        if (*top == NULL || (*top)->next == NULL)
        {
                printf("L<line_number>: can't add, stack too short");
                exit(EXIT_FAILURE);
        }
        if ((*top)->n == 0)
                printf("Error");
        temp = (*top)->next;
        temp->n %= (*top)->n;
        _pop(top, line);
}
