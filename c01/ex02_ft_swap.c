void    ft_swap(int *a, int *b)
{
        int     swap;

        swap = *a;
        *a = *b;
        *b = swap;
}
/*
#include <stdio.h>

int     main()
{
        int     v;
        int     g;

        v = 27;
        g = 9;
        printf("v = %d\ng = %d\n", v, g);
        ft_swap(&v, &g);
        printf("v = %d\ng = %d\n", v, g);
        return (0);
}
*/