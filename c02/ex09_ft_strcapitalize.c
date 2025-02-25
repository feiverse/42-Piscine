char    *ft_strcapitalize(char *str)
{
        int             v;
        int             g;
        char    c;

        v = 0;
        g = 1;
        while (*(str + v) != '\0')
        {
                c = *(str + v);
                if (g == 1 && c >= 'a' && c <= 'z')
                        str[v] -= 32;
                else if (g == 0 && c >= 'A' && c <= 'Z')
                        str[v] += 32;
                if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
                                g = 1;
                else
                        g = 0;
                v++;
        }
        return (str);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    *str;

        char    print[] = "Est-ce que vOus avEz un sac en birkin 25?";
        //char  print[] = "Est-ce que vOus avez un sac birkin 25 noir ou etoupe?";

        str = print;
        printf("%s\n", ft_strcapitalize(str));
*/