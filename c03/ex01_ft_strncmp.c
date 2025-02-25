int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int    v;

        if (!n)
                return (0);
        v = 0;
        while (v < n && s1[v] && s2[v] && s1[v] == s2[v])
                v++;
        if (v < n)
                return (s1[v] - s2[v]);
        else
                return (0);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    *s1;
        char    *s2;

        s1 = " cestlavie";
        s2 = " cuoi?";
        printf("%d\n", ft_strncmp(s1, s2, 1));
        printf("%d\n", ft_strncmp(s1, s2, 0));
        printf("%d\n", strncmp(s1, s2, 1));
        printf("%d\n", strncmp(s1, s2, 0));
}
*/