#include "../includes/push_swap_bonus.h"
#include "../includes/push_swap.h"

int get_number_of_operation(char *command)
{
	if (memcmp(command, "sa\n", ft_strlen("sa\n")))
		return (1);
	else if (memcmp(command, "sb\n", ft_strlen("sb\n")))
		return (1);
	else if (memcmp(command, "ss\n", ft_strlen("ss\n")))
		return (1);
	else if (memcmp(command, "pa\n", ft_strlen("pa\n")))
		return (1);
	else if (memcmp(command, "pb\n", ft_strlen("pb\n")))
		return (1);
	else if (memcmp(command, "ra\n", ft_strlen("ra\n")))
		return (1);
	else if (memcmp(command, "rb\n", ft_strlen("rb\n")))
		return (1);
	else if (memcmp(command, "rr\n", ft_strlen("rr\n")))
		return (1);
	else if (memcmp(command, "rra\n", ft_strlen("rra\n")))
		return (1);
	else if (memcmp(command, "rrb\n", ft_strlen("rrb\n")))
		return (1);
	else if (memcmp(command, "rrr\n", ft_strlen("rrr\n")))
		return (1);

	// else if (command == "sb\n")
	// 	return (2);
	// else if (command == "ss\n")
	// 	return (3);
	// else if (command == "pa\n")
	// 	return (4);
	// else if (command == "pb\n")
	// 	return (5);
	// else if (command == "ra\n")
	// 	return (6);
	// else if (command == "rb\n")
	// 	return (7);
	// else if (command == "rr\n")
	// 	return (8);
	// else if (command == "rra\n")
	// 	return (9);
	// else if (command == "rrb\n")
	// 	return (10);
	// else if (command == "rrr\n")
	// 	return (11);
	printf("'%s'", command);
	return (0);
}

void do_operation_with_stack(int number, t_storage **storage)
{
	if (number == 1)
		do_swap_a(storage);
	else if (number == 2)
		do_swap_b(storage);
	else if (number == 3)
		do_swap_a_and_b(storage);
	else if (number == 4)
		do_push_a(storage);
	else if (number == 5)
		do_push_b(storage);
	else if (number == 6)
		do_rotate_a(storage);
	else if (number == 7)
		do_rotate_b(storage);
	else if (number == 8)
		do_rotate_a_and_b(storage);
	else if (number == 9)
		do_reverse_rotate_a(storage);
	else if (number == 10)
		do_reverse_rotate_b(storage);
	else if (number == 11)
		do_reverse_rotate_a_and_b(storage);
}

void print_result(t_storage **storage)
{
	if (check_sort_a(storage) && !((*storage)->b))
		OK_actions(storage);
	KO_actions(storage);
}
