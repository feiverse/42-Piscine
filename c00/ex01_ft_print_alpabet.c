#include <unistd.h>

void    ft_print_alpabet(void)
{
        char    v;
        
        v = 'a';
        while (v <= 'z')
        {
                write(1, &v, 1);
                v++;
         }
}
/*
int     main(void)
{
        ft_print_alpabet();
}
*/
