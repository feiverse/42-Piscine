int     ft_strlen(char *str)
{
        int     v;

        v = 0;
        while (str[v])
                v++;
        return (v);
}
/*
#include <stdio.h>

int     main(void)
{
        char    str[10] = "Au revoir";
        
        printf("%d\n", ft_strlen(str));
        return (0);
}
*/