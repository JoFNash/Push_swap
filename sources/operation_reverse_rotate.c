/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:38 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:38 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include "push_swap.h"
#include "Libft/libft.h"

void	reverse_rotate_a(t_storage **storage)
{
	if (do_reverse_rotate_a(storage))
		ft_putstr_fd("rra\n", 1);
}

void	reverse_rotate_b(t_storage **storage)
{
	if (do_reverse_rotate_b(storage))
		ft_putstr_fd("rrb\n", 1);
}

void	reverse_rotate_a_and_b(t_storage **storage)
{
	if (do_reverse_rotate_a(storage) && do_reverse_rotate_b(storage))
		ft_putstr_fd("rrr\n", 1);
}
