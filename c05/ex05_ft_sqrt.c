int     ft_sqrt(int nb)
{
        int     v;

        v = 1;
        while (v * v <= nb && v <= 46340)
        {
                if (v * v == nb)
                        return (v);
                else
                        v++;
        }
        return (0);
}
/*
#include <stdio.h>

int     main()
{
        printf("%d\n", ft_sqrt(123));
}
*/