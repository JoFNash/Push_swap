typedef struct s_stack
{
    int    value;
    int    order;
    int    flag;
    struct s_stack *next;
    struct s_stack prev;
} p_stack;


