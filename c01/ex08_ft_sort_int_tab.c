void    ft_sort_int_tab(int *tab, int size)
{
        int     swap;
        int     count;

        count = 0;
        while (count < (size - 1))
        {
                if (tab[count] > tab[count + 1])
                {
                        swap = tab[count];
                        tab[count] = tab[count + 1];
                        tab[count + 1] = swap;
                        count = 0;
                }
                else
                        count++;
        }
}
/*
#include <stdio.h>

int     main(void)
{
        int tab[6] = {27,7,19,6,10,3};
        ft_sort_int_tab(tab, 6);
        for(int v = 0; v < 6; v++)
        {
                printf("%d ", tab[v]);
        }
}
*/