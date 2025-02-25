void    ft_ultimate_div_mod(int *a, int *b)
{
        int     temp;

        temp = *a;
        *a = *a / *b;
        *b = temp % *b;
}
/*
#include <stdio.h>

int     main(void)
{
        int     a;
        int     b;

        a = 7;
        b = 2;
        printf("div = %d\nmod = %d\n", a, b);
        ft_ultimate_div_mod(&a, &b);
        printf("div = %d\nmod = %d\n", a, b);
        return(0);
}
*/