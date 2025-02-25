#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
                write(1, "-2147483648", 11);
                return ;
        }
        if (nb < 0)
        {
                ft_putchar('-');
                nb *= -1;
        }
        if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
        {
                ft_putchar(nb + 48);
        }
}
/*
#include <stdio.h>

int     main(void)
{
        ft_putnbr(1);
        printf("\n");
        ft_putnbr(606);
        printf("\n");
        ft_putnbr(-2147483648);
        printf("\n");
        ft_putnbr(0);
        printf("\n");
        ft_putnbr(-727);
        printf("\n");
        ft_putnbr(2147483647);
        return (0);
}
*/