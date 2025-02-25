int     ft_str_is_lowercase(char *str)
{
        while (*str)
        {
                if (*str < 97 || *str > 122)
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

        char lower[] = "fei";
        //char lower[] = "Vesta";
        //char lower[] = "@@@";
        //char lower[] = "FWEI";
        
        str = lower;
        printf("%d\n", ft_str_is_lowercase(str));
}
*/