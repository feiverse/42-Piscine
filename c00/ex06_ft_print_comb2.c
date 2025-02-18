#include <unistd.h>

void    ft_print_dig(int n)
{
        n += 48;
        write(1, &n, 1);
}

void    ft_print_comb2(void)
{
        int     a;
        int     b;

        a = 0;
        while (a <= 98)
        {
                b = a + 1;
                while (b <= 99)
                {
                        ft_print_dig(a / 10);
                        ft_print_dig(a % 10);
                        write(1, " ", 1);
                        ft_print_dig(b / 10);
                        ft_print_dig(b % 10);
                        if (a != 98 || b != 99)
                        {
                                write(1, ", ", 2);
                        }
                        b++;
                }
                a++;
        }
}
/*
int     main(void)
{
        ft_print_comb2();
}
*/
