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
        char    *line;
        int     flag;
        int     next;
        int     mid;
        int     max;
        int     argc;
    } p_storage;

p_storage   *create_storage(char **argv, int argc);
    void free_storage(p_storage **storage);

    /* allowed operations for stacks a and b */
    void do_swap_a(p_storage **storage);
    void do_swap_b(p_storage **storage);
    void do_swap_a_and_b(p_storage **storage);
    void do_push_a(p_storage **storage);
    void do_push_b(p_storage **storage);
    void do_rotate_a(p_storage **storage);
    void do_rotate_b(p_storage **storage);
    void do_rotate_a_and_b(p_storage **storage);
    void do_reverse_rotate_a(p_storage **storage);
    void do_reverse_rotate_b(p_storage **storage);
    void do_reverse_rotate_a_and_b(p_storage **storage);

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
    void result_actions(p_storage **storage);
void check_line_on_duplicates(char *line);

    /* stacks functions */
    struct s_stack* init_stack(int value);
    void free_stack(p_stack **stack);
    void fill_stack_a(p_storage **storage);
    void fill(p_storage **storage, char *str, size_t i);
    void show_stack(struct s_storage *storage);
    void add_stack_top(p_storage **storage, p_stack **top, int value);
    void add_stack_end(p_storage **storage, p_stack **top, int value);
    void remove_top_stack(p_storage **storage, p_stack **top, int *remove_value);
    void remove_end_stack(p_storage **storage, p_stack **top, int *remove_value);
    int check_sort_a(p_storage **storage);
    int atoi_push_swap(char *str, p_storage **storage);

	/* sort functions */
	void start_sort(p_storage **storage);
	void start_little_sort(p_storage **storage, int elems);
	void sort_2_elems(p_storage **storage);
	void sort_3_elems(p_storage **storage);
	void do_sort_3_elems(p_storage** storage, int first, int second, int third);
	void sort_4_elems(p_storage **storage);
	void sort_5_elems(p_storage **storage);
	void start_big_sort(p_storage **storage);

	int min_value_stack(p_stack * stack);

    #endif