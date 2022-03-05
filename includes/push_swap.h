#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

/* stack definition via doubly linked list */

typedef struct s_stack
{
	int				value;
	int				order;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/* structure STORAGE keeps:
two stacks - a & b; 
flag - it is initially 0, but it always increases by one as soon as we find mid on stack B;
next - next in which I remember which next element I need to sort;
mid - middle of the unsorted values of the current stack;
max - the maximum value of the current stack;
*/

typedef struct s_storage
{
	struct s_stack	*a;
	struct s_stack	*b;
	char			**argv;
	char			*line;
	int				next;
	int				argc;
}		t_storage;

t_storage	*create_storage(char **argv, int argc);
void		free_storage(t_storage **storage);

/* allowed operations for stacks a and b */
int	do_swap_a(t_storage **storage);
int				do_swap_b(t_storage **storage);
int				do_swap_a_and_b(t_storage **storage);
int				do_push_a(t_storage **storage);
int				do_push_b(t_storage **storage);
int				do_rotate_a(t_storage **storage);
int				do_rotate_b(t_storage **storage);
int				do_rotate_a_and_b(t_storage **storage);
int				do_reverse_rotate_a(t_storage **storage);
int				do_reverse_rotate_b(t_storage **storage);
int				do_reverse_rotate_a_and_b(t_storage **storage);
long long int	atoi_push_swap(const char *nptr);

void			swap_a(t_storage **storage);
void			swap_b(t_storage **storage);
void			swap_a_and_b(t_storage **storage);
void			push_a(t_storage **storage);
void			push_b(t_storage **storage);
void			rotate_a(t_storage **storage);
void			rotate_b(t_storage **storage);
void			rotate_a_and_b(t_storage **storage);
void			reverse_rotate_a(t_storage **storage);
void			reverse_rotate_b(t_storage **storage);
void			reverse_rotate_a_and_b(t_storage **storage);

void		review(t_storage **storage);
void		find_errors(t_storage **storage);
void		error_actions(t_storage **storage);
void		check_duplicates(t_storage **storage);
void		result_actions(t_storage **storage);
void		check_line_on_duplicates(char *line);

/* stacks functions */
t_stack		*init_stack(int value);
void		free_stack(t_stack **stack);
void		fill_stack_a(t_storage **storage);
void		fill(t_storage **storage, char *str, size_t i, size_t j);
void		show_stack(struct s_storage *storage);
void		add_stack_top(t_storage **storage, t_stack **top,
				int value, int order);
void		add_stack_end(t_storage **storage, t_stack **top,
				int value, int order);
void		remove_top_stack(t_stack **top, int *remove_value, int *order);
void		remove_end_stack(t_stack **top, int *remove_value, int *order);
int			check_sort_a(t_storage **storage);
int			size_of_stack(t_stack *stack);
int			max_elem_in_stack(t_stack *stack);
int			elem_upper_middle(t_stack *stack, int size, int value);
int			min_value_stack(t_stack *stack);

/* sort functions */
void		start_sort(t_storage **storage);
void		start_little_sort(t_storage **storage, int elems);
void		sort_2_elems(t_storage **storage);
void		sort_3_elems(t_storage **storage);
void		do_sort_3_elems(t_storage **storage, int first,
				int second, int third);
void		sort_4_elems(t_storage **storage);
void		sort_5_elems(t_storage **storage);
void		start_big_sort(t_storage **storage);
void		butterfly_sort(t_storage **storage, int deviation);
void		butterfly_return_sort(t_storage **storage);

/* array (array to get order for all numbers) functions */
void		fill_array(t_storage **storage);
void		sort_array(int **array, size_t size);
void		print_array(int *arrray, int n);
void		assign_order_to_numbers(t_storage **storage, int *array, int size);
int			check_sign(char *string);

#endif