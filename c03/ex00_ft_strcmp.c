int     ft_strcmp(char *s1, char *s2)
{
        int     v;

        v = 0;
        while (s1[v] && s2[v] && s1[v] == s2[v])
        {
                ++v;
        }
        return (s1[v] - s2[v]);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    *str1;
        char    *str2;

        str1 = "feiFEIcestlaviee";
        str2 = "fei/";
        printf("%d\n", ft_strcmp(str1, str2));
        printf("%d\n", strcmp(str1, str2));
}
*/