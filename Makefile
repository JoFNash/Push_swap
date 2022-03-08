HEADER		= includes/push_swap.h

HEADER_BONUS = includes/push_swap_bonus.h

NAME		= push_swap

NAME_BONUS	= checker

LIBFT_PATH  = libft
GNL_PATH	= get_next_line

SRCS        = sources/array_actions.c\
			  sources/atoi_push_swap.c\
			  sources/big_sort.c\
			  sources/create_storage.c\
			  sources/do_operations_1_part.c\
			  sources/do_operations_2_part.c\
			  sources/do_operations_3_part.c\
			  sources/fill_stack_a.c\
			  sources/free_storage.c\
			  sources/little_sort.c\
			  sources/min_value_stack.c\
			  sources/operation_push.c\
			  sources/operation_reverse_rotate.c\
			  sources/operation_rotate.c\
			  sources/operation_swap.c\
			  sources/result_actions.c\
			  sources/review.c\
			  sources/sort_2_3_4_5_elems.c\
			  sources/stack_utils_1_part.c\
			  sources/stack_utils_2_part.c\
			  sources/start_sort.c\
			  sources/last_elems_order_1_and_0.c\
			  sources/main.c\

				
SRCS_BONUS	= 	bonus/main_bonus.c\
				bonus/atoi_push_swap_bonus.c\
				bonus/create_storage_bonus.c\
				bonus/do_operations_1_part_bonus.c\
				bonus/do_operations_2_part_bonus.c\
				bonus/do_operations_3_part_bonus.c\
				bonus/fill_stack_a_bonus.c\
				bonus/free_storage_bonus.c\
				bonus/ft_isdigit_bonus.c\
				bonus/ft_putstr_fd_bonus.c\
				bonus/ft_strchr_bonus.c\
				bonus/ft_strdup_bonus.c\
				bonus/ft_strjoin_bonus.c\
				bonus/ft_strlen_bonus.c\
				bonus/ft_substr_bonus.c\
				bonus/get_next_line_bonus.c\
				bonus/ok_actions_bonus.c\
				bonus/read_instructions_bonus.c\
				bonus/review_bonus.c\
				bonus/stack_utils_1_part_bonus.c\
				bonus/stack_utils_2_part_bonus.c\
				bonus/get_number_of_operations.c\


OBJS 		= $(SRCS:.c=.o)

OBJS_BONUS 	= $(SRCS_BONUS:.c=.o)

CC 			= gcc

RM 			= rm -rf

CFLAGS 		= -g -Wall -Wextra -Werror

# what should I change here?

%.o : %.c	$(HEADER)
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): 	$(OBJS) $(HEADER)
			$(MAKE) -C $(LIBFT_PATH)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)/libft.a -o $(NAME)

all:		$(NAME)

clean:
			$(MAKE) clean -C $(LIBFT_PATH)
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(MAKE) fclean -C $(LIBFT_PATH)
			$(RM) $(NAME)

bonus:		$(OBJS_BONUS) $(HEADER_BONUS)
			$(MAKE) -C $(LIBFT_PATH)
			$(CC) $(CFLAGS) $(OBJS_BONUS) $(LIBFT_PATH)/libft.a -o $(NAME_BONUS)

re:			fclean all

.PHONY:		all clean fclean re bonus