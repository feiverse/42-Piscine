int     ft_str_is_printable(char *str)
{
        while (*str)
        {
                if (*str < 32 || *str > 127)
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

        char printable[] = "Cest la vie";
        //char printable[] = "\n";
        //char printable[] = "\t";
        //char printable[] = "\r";
        
        str = printable;
        printf("%d\n", ft_str_is_printable(str));
}
*/