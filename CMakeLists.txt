cmake_minimum_required(VERSION 3.21)
project(Push_Swap_New C)

set(CMAKE_C_STANDARD 99)

include_directories(.)
include_directories(Libft)

add_executable(Push_Swap_New
        Libft/ft_memset.c
        Libft/ft_bzero.c
        Libft/ft_memcpy.c
        Libft/ft_memmove.c
        Libft/ft_memchr.c
        Libft/ft_memcmp.c
        Libft/ft_strlen.c
        Libft/ft_strlcpy.c
        Libft/ft_striteri.c
        Libft/ft_strlcat.c
        Libft/ft_strchr.c
        Libft/ft_strrchr.c
        Libft/ft_strnstr.c
        Libft/ft_strncmp.c
        Libft/ft_atoi.c
        Libft/ft_isalpha.c
        Libft/ft_isdigit.c
        Libft/ft_isalnum.c
        Libft/ft_isascii.c
        Libft/ft_isprint.c
        Libft/ft_toupper.c
        Libft/ft_tolower.c
        Libft/ft_calloc.c
        Libft/ft_strdup.c
        Libft/ft_substr.c
        Libft/ft_strjoin.c
        Libft/ft_itoa.c
        Libft/ft_putchar_fd.c
        Libft/ft_putstr_fd.c
        Libft/ft_putendl_fd.c
        Libft/ft_putnbr_fd.c
        Libft/ft_strmapi.c
        Libft/ft_strtrim.c
        Libft/ft_split.c
        main.c
        array_actions.c
        atoi_push_swap.c
        big_sort.c
        create_storage.c
        do_operations_1_part.c
        do_operatioms_2_part.c
        fill_stack_a.c
        free_storage.c
        little_sort.c
        min_value_stack.c
        operation_push.c
        operation_reverse_rotate.c
        operation_rotate.c
        operation_swap.c
        result_actions.c
        review.c
        sort_2_3_4_5_elems.c
        stack_utils_1_part.c
        stack_utils_2_part.c
        start_sort.c
        )
