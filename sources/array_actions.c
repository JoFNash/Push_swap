/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_actions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:59:43 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 15:31:12 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../libft/libft.h"
#include <stdio.h>

void	fill_array(t_storage **storage)
{
	int		*array;
	t_stack	*stack;
	size_t	i;

	array = (int *)malloc(sizeof(int) * (*storage)->argc);
	if (!array)
		error_actions(storage);
	stack = (*storage)->a;
	i = 0;
	while (stack != NULL)
	{
		array[i] = stack->value;
		stack = stack->next;
		i++;
	}
	sort_array(&array, (*storage)->argc);
	assign_order_to_numbers(storage, array, (int)((*storage)->argc));
	free(array);
}

void	assign_order_to_numbers(t_storage **storage, int *array, int size)
{
	t_stack	**stack;
	t_stack	*tmp;
	int		i;

	stack = &((*storage)->a);
	i = 0;
	while (i < size)
	{
		tmp = (*stack);
		while (tmp != NULL)
		{
			if (array[i] == tmp->value)
			{
				tmp->order = i;
				break ;
			}
			tmp = tmp->next;
		}
		i++;
	}
}

void	sort_array(int **array, size_t size)
{
	size_t	i;
	size_t	j;
	int		tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if ((*array)[j] > (*array)[j + 1])
			{
				tmp = (*array)[j];
				(*array)[j] = (*array)[j + 1];
				(*array)[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	print_array(int *array, int n)
{
	int	i;

	i = 0;
	printf("----------\n");
	while (i < n)
	{
		printf("array[%d] = %d\n", i, array[i]);
		i++;
	}
}
