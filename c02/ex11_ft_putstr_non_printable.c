#include <unistd.h>

void    ft_putstr_non_printable(char *str)
{
        int             v;
        char    *fei;

        v = 0;
        fei = "0123456789abcdefg";
        while (str[v])
        {
                if (str[v] < 32 || str[v] > 126)
                {
                        write(1, "\\", 1);
                        write(1, &fei[(unsigned char)str[v] / 16], 1);
                        write(1, &fei[(unsigned char)str[v] % 16], 1);
                }
                else
                        write(1, &str[v], 1);
                v++;
        }
}
/*
int     main()
{
        ft_putstr_non_printable("Coucou\ntu vas bien?");
}
*/