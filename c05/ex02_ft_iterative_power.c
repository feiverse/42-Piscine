int     ft_iterative_power(int nb, int power)
{
        int     v;
        int     g;

        g = power;
        v = 1;
        if (power < 0)
        {
                return (0);
        }
        else if (power == 0)
        {
                return (1);
        }
        while (g > 0)
        {
                v = v * nb;
                g--;
        }
        return (v);
}
/*
#include <stdio.h>

int     main(void)
{
        int     v;
        int     g;

        v = 7;
        g = 27;
        printf("%d\n", ft_iterative_power(v, g));
}
*/