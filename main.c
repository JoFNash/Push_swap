#include "push_swap.h"

int main(int argc, char **argv)
{
    p_storage   *storage;

    storage = NULL;
    if (argc < 2)
        return (1);
    storage = create_storage(argv);
    review(&storage);

    return (0);
}