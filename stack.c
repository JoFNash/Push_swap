#include <stdlib.h>

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
mid - middle of the unsorted values ??of the current stack;
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

struct s_stack* Init_stack(int value)
{
    struct s_stack *Stack;

    Stack = (struct s_stack*)malloc(sizeof(struct s_stack *));
    if (!Stack)
        return (NULL);
    Stack->value = value;
    Stack->prev = NULL;
    Stack->next = NULL;
    Stack->order = 0;
    Stack->flag = 0;
    return (Stack);
}

void Add(struct p_stack * Stack, struct s_stack* Node)
{

}

/* allowed actions for stacks a and b */
void swap_a(p_storage *storage)
{

}

void swap_b(p_storage *storage)
{
    
}

void swap_a_and_b(p_storage *storage)
{
    
}

void push_a(p_storage *storage)
{
    
}

void push_b(p_storage *storage)
{
    
}

void rotate_a(p_storage *storage)
{
    
}

void rotate_b(p_storage *storage)
{
    
}

void rotate_a_and_b(p_storage *storage)
{
    
}

void reverse_rotate_a(p_storage *storage)
{
    
}

void reverse_rotate_b(p_storage *storage)
{
    
}

void reverse_rotate_a_and_b(p_storage *storage)
{
    
}

/*
void push_swap()
{
    int     *mass;
    
    mass = fill_mass();

    if(check_sort() == 1)
    {
        
    }
}
*/

p_storage   *create_storage(p_storage   *storage, char **argv)
{
    storage = (p_storage *)malloc(sizeof(p_storage));
    if (!storage)
        return (NULL);
    storage->a = NULL;
    storage->b = NULL;
    storage->argv = argv;
    storage->flag = 0;
    storage->next = 1;
    storage->mid = 0;    
    storage->max = 0;
    return (storage);
}

/* review calls fill_stack_a() and check_sort_a() to check if stack a is sorted */
void review(p_storage *storage)
{
    if (!storage)
        return ;
    fill_stack_a(storage);
    check_sort_a(storage);
    /* .(?). */
}

void fill_stack_a(p_storage *storage)
{

}

void check_sort_a(storage)
{

}

int mAin(int argc, char **argv)
{
    p_storage   *storage;

    storage = NULL;
    if (argc < 2)
        return (1);
    storage = create_storage(storage, argv);
    review(storage);

    return (0);
}