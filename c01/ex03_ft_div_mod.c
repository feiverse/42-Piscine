void    ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
        int     v;
        int     g;

        v = 27;
        g = 7;
        printf("div = %d\nmod = %d\n", v, g);
        ft_div_mod(27,7, &v, &g);
        printf("div = %d\nmod = %d\n", v, g);
        return(0);
}
*/

/*
./a.out 
div = 27
mod = 7
div = 3
mod = 6
*/