char    *ft_strstr(char *str, char *to_find)
{
        int     v;
        int     g;

        if (*to_find == '\0')
                return (str);
        v = 0;
        while (str[v])
        {
                g = 0;
                while (to_find[g] == str[v + g])
                {
                        if (to_find[g + 1] == '\0')
                        {
                                return (str + v);
                        }
                        g++;
                }
                v++;
        }
        return (0);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    str[] = "tout est devenu flou!";
        char    to_find[] = " est";

        printf("%s\n", ft_strstr(str, to_find));
        printf("%s\n", strstr(str, to_find));
}
*/