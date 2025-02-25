char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int    v;

        v = 0;
        while (src[v] != '\0' && v < n)
        {
                dest[v] = src[v];
                v++;
        }
        while (v < n)
        {
                dest[v] = '\0';
                v++;
        }
        return (dest);
}
/*
#include <stdio.h>

int     main(void)
{
        char    src[] = "Hiiiiiooooo";
        char    dest[] = "Tirebien";

        printf("%s\n", ft_strncpy(dest, src, 3));
        printf("%c\n", dest[7]);
        return(0);
}
*/