HEADER		= push_swap.h

HEADER_B	= push_swap_bonus.h

NAME		= push_swap

NAME_BONUS	= checker

LIBFT_PATH  = Libft
GNL_PATH	= Get_Next_Line

SRCS        = main.c\
              array_actions.c\
			  atoi_push_swap.c\
			  big_sort.c\
			  create_storage.c\
			  do_operations_1_part.c\
			  do_operations_2_part.c\
			  do_operations_3_part.c\
			  fill_stack_a.c\
			  free_storage.c\
			  little_sort.c\
			  min_value_stack.c\
			  operation_push.c\
			  operation_reverse_rotate.c\
			  operation_rotate.c\
			  operation_swap.c\
			  result_actions.c\
			  review.c\
			  sort_2_3_4_5_elems.c\
			  stack_utils_1_part.c\
			  stack_utils_2_part.c\
			  start_sort.c

SRCS_BONUS	= main.c\
			OK_actions.c\
			read_instructions.c

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
			$(RM) $(OBJS)

fclean:		clean
			$(MAKE) fclean -C $(LIBFT_PATH)
			$(RM) $(NAME)

bonus:		$(OBJS) $(HEADER)
			ar rc $(NAME) $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re