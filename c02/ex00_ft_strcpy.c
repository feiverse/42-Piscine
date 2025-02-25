char    *ft_strcpy(char *dest, char *src)
{
        int     v;

        v = 0;
        while (src[v] != '\0')
        {
                dest[v] = src[v];
                v++;
        }
        dest[v] = '\0';
        return (dest);
}
/*
#include <stdio.h>

int     main(void)
{
        char    dest[] = "la la la!";
        char    src[] = "C'est la vie!";

        printf("%s\n",ft_strcpy(dest, src));
        return (0);
}
*/