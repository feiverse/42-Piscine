char    *ft_strcat(char *dest, char *src)
{
        int     v;
        int     g;

        v = 0;
        g = 0;
        while (dest[v] != '\0')
                v++;
        while (src[g] != '\0')
        {
                dest[v] = src[g];
                v++;
                g++;
        }
        dest[v] = '\0';
        return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    dest[50];
        char    *src;
        
        src = "Cest la vie!";
        printf(".%s.\n", ft_strcat(dest, src));
        printf(".%s.\n", strcat(dest, src));
}
*/