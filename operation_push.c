/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:00:36 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/04 15:33:54 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include "push_swap.h"
#include "Libft/libft.h"
#include "stdio.h"

void	push_a(t_storage **storage)
{
	if (do_push_a(storage))
		ft_putstr_fd("pa\n", 1);
}

void	push_b(t_storage **storage)
{
	if (do_push_b(storage))
		ft_putstr_fd("pb\n", 1);
}
