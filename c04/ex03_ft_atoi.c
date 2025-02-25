int     ft_atoi(char *str)
{
        int     f;
        int     e;
        int     i;

        f = 0;
        e = 1;
        i = 0;
        while (str[f] == ' ' || str[f] == '\f' || str[f] == '\n'
                ||str[f] == '\r' || str[f] == '\t' || str[f] == '\v')
        {
                f++;
        }
        while (str[f] == '-' || str[f] == '+')
        {
                if (str[f] == '-')
                        e *= -1;
                f++;
        }
        while (str[f] >= '0' && str[f] <= '9')
        {
                i = (i * 10) + (str[f] - '0');
                f++;
        }
        i *= e;
        return (i);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    *str;
        str = " ---+--+1234ab567";
        printf("%d\n", ft_atoi(str));
}
*/