#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../includes/push_swap.h"
# include "../get_next_line/get_next_line_bonus.h"

void	OK_actions(t_storage **storage);
void	KO_actions(t_storage **storage);
void	read_instructions(t_storage **storage);
int get_number_of_operation(char *command);
void do_operation_with_stack(int number, t_storage **storage);
void print_result(t_storage **storage);

#endif