int     ft_is_prime(int nb)
{
        int     v;

        v = 2;
        if (nb <= 1)
                return (0);
        while (v <= nb / v)
        {
                if (nb % v == 0)
                        return (0);
                v++;
        }
        return (1);
}
/*
#include <stdio.h>

int     main(void)
{
        printf("%d\n", ft_is_prime(6));
}
*/