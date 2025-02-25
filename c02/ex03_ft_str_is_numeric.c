int     ft_str_is_numeric(char *str)
{
        int     v;

        v = 0;
        while (str[v] != '\0')
        {
                if (str[v] <= 47 || str[v] >= 58)
                {
                        return (0);
                }
                v++;
        }
        return (1);
}
/*
#include <stdio.h>

int     main(void)
{
        int     num;
        char    a[] = "fei";

        num = ft_str_is_numeric(a);
        printf("%d\n", num);
}
*/