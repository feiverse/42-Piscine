char    *ft_strlowcase(char *str)
{
        int     v;

        v = 0;
        while (*(str + v))
        {
                if (*(str + v) >= 65 && *(str + v) <= 90)
                        *(str + v) += 32;
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

        //char printable[] = "Grade Tes Reves";
        char printable[] = "Le Monde De L'imagination Est Sans Frontieres";
        
        str = printable;
        printf("%s\n", ft_strlowcase(str));
}
*/