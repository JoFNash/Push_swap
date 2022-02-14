#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/* stack definition via doubly linked list */
typedef struct s_stack
{
    int    value;
    int    order;
    int    flag;
    struct s_stack *next;
    struct s_stack *prev;
} p_stack;


/* structure STORAGE keeps: 
two stacks - a & b; 
flag - it is initially 0, but it always increases by one as soon as we find mid on stack B;
next - next in which I remember which next element I need to sort;
mid - middle of the unsorted values of the current stack;
max - the maximum value of the current stack;
*/

typedef struct s_storage
{
    struct  s_stack *a;
    struct  s_stack *b;
    char    **argv;
    int     flag;
    int     next;
    int     mid;
    int     max;
} p_storage;

p_storage   *create_storage(char **argv);
void free_storage(p_storage **storage);

/* allowed operations for stacks a and b */
void swap_a(p_storage **storage);
void swap_b(p_storage **storage);
void swap_a_and_b(p_storage **storage);
void push_a(p_storage **storage);
void push_b(p_storage **storage);
void rotate_a(p_storage **storage);
void rotate_b(p_storage **storage);
void rotate_a_and_b(p_storage **storage);
void reverse_rotate_a(p_storage **storage);
void reverse_rotate_b(p_storage **storage);
void reverse_rotate_a_and_b(p_storage **storage);

void review(p_storage **storage);
void find_errors(p_storage **storage);
void error_actions(p_storage **storage);
void check_duplicates(p_storage **storage);

/* stacks functions */
struct s_stack* Init_stack(int value);
void free_stack(p_stack **stack);
void check_sort_a(p_storage **storage);
void fill_stack_a(p_storage **storage);
void fill(p_storage **storage, char *str, size_t i, size_t j);
void Show_stack(struct s_storage *storage);
// struct s_stack *Add_stack(struct s_storage *storage, int value, char stack_name);
void    Add_stack(p_storage **storage, p_stack **top, int value);

int atoi_push_swap(char *str, p_storage **storage);

#endif