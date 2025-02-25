int     ft_recursive_factorial(int nb)
{
        if (nb < 0)
        {
                return (0);
        }
        else if (nb == 0)
        {
                return (1);
        }
        else
        {
                return (nb * ft_recursive_factorial(nb - 1));
        }
}
/*
#include <stdio.h>

int     main(void)
{
        int     v;

        v = 6;
        printf("%d\n", ft_recursive_factorial(v));
}
*/