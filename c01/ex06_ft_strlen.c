int     ft_strlen(char *str)
{
        int    v;
        
        v = 0;
        while (str[v])
                v++;
        return (v);
}
/*
#include <stdio.h>

int     main(void)
{
        printf(" fei : %d\n", ft_strlen("fei"));
        return (0);
}
*/