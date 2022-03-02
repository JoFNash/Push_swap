/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:41 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/02 22:00:42 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

void	rotate_a(p_storage **storage)
{
	if (do_rotate_a(storage))
		ft_putstr_fd("ra\n", 1);
}

void	rotate_b(p_storage **storage)
{
	if (do_rotate_b(storage))
		ft_putstr_fd("rb\n", 1);
}

void	rotate_a_and_b(p_storage **storage)
{
	if (do_rotate_a(storage) && do_rotate_b(storage))
		ft_putstr_fd("rr\n", 1);
}
