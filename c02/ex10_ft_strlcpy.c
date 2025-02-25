unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
        unsigned int    v;
        unsigned int    g;

        v = 0;
        g = 0;
        while (src[g])
                g++;
        if (size < 1)
                return (g);
        while (src[v] && v < size - 1)
        {
                dest[v] = src[v];
                v++;
        }
        dest[v] = '\0';
        return (g);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    dest[33];
        char    *src;
        int     size;

        src = "C'est la vie!";
        size = 10;
        printf("%d\n", ft_strlcpy(dest, src, size));
        printf(".%s.\n\n", dest);
}
*/