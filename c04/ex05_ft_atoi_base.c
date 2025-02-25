int     ves_base(char *base)
{
        int     v;
        int     g;

        v = 0;
        while (base[v])
        {
                g = 0;
                while (base[g])
                {
                        if (base[v] == base[g] && v != g)
                                return (0);
                        g++;
                }
                if (base[v] == ' ' || base[v] == '\f' || base[v] == '\n'
                        || base[v] == '\r' || base[v] == '\t' || base[v] == '\v'
                        || base[v] == '-' || base[v] == '+')
                        return (0);
                v++;
        }
        return (v);
}

int     test_base(char str, char *base)
{
        int     fei;
        int     w;

        fei = 0;
        w = 0;
        while (base[w])
        {
                if (str == base[w])
                        return (w);
                w++;
        }
        return (-1);
}

int     bien_base(char *str, int *v)
{
        int     fei;

        fei = 1;
        while (str[*v] == ' ' || str[*v] == '\f' || str[*v] == '\n'
                || str[*v] == '\r' || str[*v] == '\t' || str[*v] == '\v')
                *v += 1;
        while (str[*v] == '-' || str[*v] == '+')
        {
                if (str[*v] == '-')
                        fei *= -1;
                *v += 1;
        }
        return (fei);
}

int     ft_atoi_base(char *str, char *base)
{
        int     fei;
        int     uni;
        int     num;
        int     god;
        int     wei;

        num = 0;
        fei = 0;
        wei = ves_base(base);
        if (wei >= 2)
        {
                uni = bien_base(str, &fei);
                god = test_base(str[fei], base);
                while (god != -1)
                {
                        num = (num * wei) + god;
                        fei++;
                        god = test_base(str[fei], base);
                }
                return (num *= uni);
        }
        return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
        printf("%d\n", ft_atoi_base("ff", "0123456789"));
        printf("%d\n", ft_atoi_base("-2147483648", "0123456789abcdef"));
        printf("%d\n", ft_atoi_base("42", "01"));

        return (0);
}
*/