void    ft_rev_int_tab(int *tab, int size)
{
        int     temp;
        int     first;
        int     last;

        first = 0;
        last = size -1 ;
        while (first < size / 2)
        {
                temp = tab[first];
                tab[first] = tab[last];
                tab[last] = temp;
                first++;
                last--;
        }
}

/*
#include <unistd.h>
#include <stdio.h>

int     main(void)
{
        int     string[] = {'T', 'r', 'e', 's', ' ', 'b', 'i', 'e', 'n'};
        int     size;
        int     v;

        v = 0;
        size = 9;
        while (string[v] != '\0')
        {
                write(1, &string[v], 1);
                v++;
        }
        v = 0;
        ft_rev_int_tab(&string[0], size);

        while (string[v] != '\0')
        {
                write(1, &string[v], 1);
                v++;
        }

        return (0);
}
*/