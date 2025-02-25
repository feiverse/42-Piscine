int     ft_recursive_power(int nb, int power)
{
        if (power < 0)
        {
                return (0);
        }
        else if (power == 0)
        {
                return (1);
        }
        else
                return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int     main(void)
{
        int     v;
        int     g;

        v = 7;
        g = 27;
        printf("%d\n", ft_recursive_power(v, g));
}
*/