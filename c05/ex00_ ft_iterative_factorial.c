int     ft_iterative_factorial(int nb)
{
        int     v;
        int     g;

        v = 1;
        g = 1;
        if (nb < 0)
        {
                return (0);
        }
        else if (nb == 0)
        {
                return (1);
        }
        while (v <= nb)
        {
                g = g * v;
                v++;
        }
        return (g);
}

/*
#include <stdio.h>

int     main(void)
{
        int     v;

        v = 0;
        printf("%d\n", ft_iterative_factorial(9));
}
*/