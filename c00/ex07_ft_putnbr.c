#include <unistd.h>

void    low_putnbr(int nb)
{
        char    v;

        if (nb < 0)
        {
                write(1, "-", 1);
                nb = -nb;
        }
        v = nb + '0';
        write(1, &v, 1);
}

void    ft_putnbr(int nb)
{
        if (nb > -10 && nb < 10)
                low_putnbr(nb);
        else if (nb > 0)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
        {
                if (nb == -2147483648)
                        write(1, "-2147483648", 11);
                else
                {
                        write(1, "-", 1);
                        ft_putnbr(-nb);
                }
        }
}
/*
#include <stdio.h>

int     main(void)
{
        ft_putnbr(-2147483648);
        printf("\n");
}
*/
