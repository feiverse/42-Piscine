#include <unistd.h>

int     to_base(char *base)
{
        int     v;
        int     g;

        v = 0;
        while (base[v])
        {
                if (base[v] == '+' || base[v] == '-')
                        return (0);
                g = v + 1;
                while (base[g])
                {
                        if (base[v] == base[g])
                                return (0);
                        g++;
                }
                v++;
        }
        return (v);
}

void    ft_putnbr_base(int nbr, char *base)
{
        long int        fei;
        long int        v;
        long int        g;

        fei = to_base(base);
        v = nbr;
        if (fei > 1)
        {
                if (nbr < 0)
                {
                        v = -v;
                        write(1, "-", 1);
                }
                g = v % fei;
                v = v / fei;
                if (v > 0)
                        ft_putnbr_base(v, base);
                write(1, &base[g], 1);
        }
}
/*
int     main(void)
{
        ft_putnbr_base(255, "0123456789");
        write(1, "\n", 1);
        ft_putnbr_base(255, "0123456789abcdef");
        write(1, "\n", 1);
        ft_putnbr_base(255, "+");
        write(1, "\n", 1);
        ft_putnbr_base(255, "-");
        write(1, "\n", 1);
        ft_putnbr_base(255, "poneyvif");
        write(1, "\n", 1);
        ft_putnbr_base(255, "01");
        return (0);
}
*/