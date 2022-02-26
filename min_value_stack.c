#include "push_swap.h"

int	min_value_stack(p_stack * stack)
{
	int	value;

	if (stack)
	{
		value = stack->value;
		while (stack != NULL)
		{
			if (stack->value < value)
				value = stack->value;
			stack = stack->next;
		}
	}
	return (value);
}