int     ft_str_is_uppercase(char *str)
{
        while (*str)
        {
                if (*str < 65 || *str > 90)
                        return (0);
                str++;
        }
        return (1);
}
/*
#include <stdio.h>
#include <string.h>

int     main(void)
{
        char    *str;

        char upper[] = "FEI";
        //char upper[] = "Vesta";
        //char upper[] = "^_^";
        //char upper[] = "fei727";

        str = upper;
        printf("%d\n", ft_str_is_uppercase(str));
}
*/