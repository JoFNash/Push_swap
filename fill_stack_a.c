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

void	fill_stack_a(p_storage **storage)
{
	size_t	i;
	size_t	j;
	char	*string;

	i = 1;
	j = 0;
	string = (*storage)->argv[i];
	find_errors(storage);
	fill(storage, string, i);
	check_duplicates(storage);
}

/* find_errors checks argv on error: invalid characters */
void	find_errors(p_storage **storage)
{
	char	*string;
	size_t	i;

	i = 1;
	string = (*storage)->argv[i];
	while (string)
	{
		while (*string)
		{
			if (*string == ' ' || ft_isdigit(*string))
				string++;
			else if (*string == '-' && ft_isdigit(*(string + 1)) &&
				(string == (*storage)->argv[i] || *(string - 1) == ' '))
				string++;
			else if (*string == '+' && ft_isdigit(*(string + 1)) &&
				(string == (*storage)->argv[i] || *(string - 1) == ' '))
				string++;
			else
				error_actions(storage);
		}
		string = (*storage)->argv[++i];
	}
}

//./push_swap "123 -71 32" "0 15 123"
void	fill(p_storage **storage, char *str, size_t i)
{
	long int	number_checked_on_int;
	int			argc;
	size_t		j;

	argc = 0;
	while (str)
	{
		while (*str)
		{
			while (!(j = 0) && *str && *str == ' ')
					str++;
			while (*(str + j) && (*(str + j) == '-' ||
					*(str + j) == '+' || ft_isdigit(*(str + j))))
				j++;
			if (!*str)
				break ;
			number_checked_on_int = atoi_push_swap(str);
			if (number_checked_on_int > INT_MAX ||
					number_checked_on_int < INT_MIN)
				error_actions(storage);
			add_stack_end(storage, &((*storage)->a), number_checked_on_int, 0);
			argc++;
			str += j;
		}
		str = (*storage)->argv[++i];
	}
	(*storage)->argc = argc;
}

void	check_duplicates(p_storage **storage)
{
	p_stack	*first;
	p_stack	*second;

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
