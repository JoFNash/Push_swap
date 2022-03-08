/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_value_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:16 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:16 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	min_value_stack(t_stack *stack)
{
	int	value;

	value = 0;
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
