/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OK_actions_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 21:15:06 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/05 18:56:04 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"
#include "../includes/push_swap.h"
#include "../libft/libft.h"

void	OK_actions(t_storage **storage)
{
	ft_putstr_fd("OK\n", 1);
	free_storage(storage);
	exit(0);
}

void	KO_actions(t_storage **storage)
{
	ft_putstr_fd("KO\n", 1);
	free_storage(storage);
	exit(-1);
}