char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
        unsigned int    v;
        unsigned int    g;

        v = 0;
        g = 0;
        while (dest[v])
                v++;
        while (src[g] && g < nb)
        {
                dest[v + g] = src[g];
                g++;
        }
        dest[v + g] = '\0';
        return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    dest[20] = "on verra";
        char    *src;
        unsigned int    size;

        size = 5;
        src = "les meilleures";
        printf("%s\n", strncat(dest, src, size));
}
*/