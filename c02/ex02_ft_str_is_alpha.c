int     ft_str_is_alpha(char *str)
{
        int     v;

        v = 0;
        while (str[v] != '\0')
        {
                if ((str[v] < 'a' || str[v] > 'z') && (str[v] < 'A' || str[v] > 'Z'))
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
        int     alpha;
        char    a[] = "fei";
        
        alpha = ft_str_is_alpha(a);
        printf("%d\n", alpha);
}
*/