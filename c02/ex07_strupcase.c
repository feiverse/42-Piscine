char    *ft_strupcase(char *str)
{
        int     v;

        v = 0;
        while (*(str + v))
        {
                if (*(str + v) >= 97 && *(str + v) <= 122)
                        *(str + v) -= 32;
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

        char printable[] = "L'homme est ne libre";
        //char printable[] = "c'est la vie";
        
        str = printable;
        printf("%s\n", ft_strupcase(str));
}
*/