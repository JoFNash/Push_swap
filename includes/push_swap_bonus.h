/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:00:48 by hsybassi          #+#    #+#             */
/*   Updated: 2022/03/08 19:00:49 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../includes/push_swap.h"
# include "../get_next_line/get_next_line_bonus.h"

void	ok_actions(t_storage **storage);
void	ko_actions(t_storage **storage);
void	read_instructions(t_storage **storage);
int		get_number_of_operation(char *command);
void	do_operation_with_stack(int number, t_storage **storage);
void	print_result(t_storage **storage);

#endif