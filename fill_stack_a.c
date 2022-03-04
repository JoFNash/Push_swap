/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:03 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:03 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"

void	fill_stack_a(t_storage **storage)
{
	size_t	i;
	size_t	j;
	char	*string;
	int argc;

	argc = (*storage)->argc - 1;
	i = 1;
	j = 0;
	string = (*storage)->argv[argc];
	find_errors(storage);
	fill(storage, string, i, j);
	check_duplicates(storage);
}

/* find_errors checks argv on error: invalid characters */
void	find_errors(t_storage **storage)
{
	char	*string;
	size_t	i;

	i = 1;
	string = (*storage)->argv[(*storage)->argc - 1];
	while (string)
	{
		while (*string)
		{
			if (*string == ' ' || ft_isdigit(*string))
				string++;
			else if (*string == '-' && ft_isdigit(*(string + 1))
				&& (string == (*storage)->argv[i] || *(string - 1) == ' '))
				string++;
			else if (*string == '+' && ft_isdigit(*(string + 1))
				&& (string == (*storage)->argv[i] || *(string - 1) == ' '))
				string++;
			else
				error_actions(storage);
		}
		string = (*storage)->argv[++i];
	}
}

//./push_swap "123 -71 32" "0 15 123"
void	fill(t_storage **storage, char *str, size_t i, size_t j)
{
	long int	check_int_n;
	int			argc;
	int			tmp_argc;

	tmp_argc = (*storage)->argc;
	argc = 0;
	while (str)
	{
		while (*str)
		{
			while (j != 0 && *str && *str == ' ')
					str++;
			while (*(str + j) && (*(str + j) == '-'
					|| *(str + j) == '+' || ft_isdigit(*(str + j))))
				j++;
			if (!*str)
				break ;
			check_int_n = atoi_push_swap(str);
			if (check_int_n > INT_MAX || check_int_n < INT_MIN)
				error_actions(storage);
			add_stack_top(storage, &((*storage)->a), check_int_n, 0);
			argc++;
			str += j;
		}
		str = (*storage)->argv[--tmp_argc];
	}
	(*storage)->argc = argc;
}

void	check_duplicates(t_storage **storage)
{
	t_stack	*first;
	t_stack	*second;

	first = (*storage)->a;
	while (first != NULL)
	{
		second = first->next;
		while (second != NULL)
		{
			if (first->value == second->value)
			{
				error_actions(storage);
			}
			second = second->next;
		}
		first = first->next;
	}
}
