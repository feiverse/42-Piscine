#include <unistd.h>

int     main(int argc, char **argv)
{
        int     f;
        int     e;
        int     i;
        int     w;

        e = argc - 1;
        while (e > 0 && e--)
        {
                f = 1;
                w = 1;
                while (f != (argc - 1) && f++)
                {
                        i = 0;
                        while (argv[f][i] == argv[w][i])
                                i++;
                        if (argv[f][i] < argv[w][i])
                                w = f;
                }
                i = 0;
                while (argv[w][i])
                        write(1, &argv[w][i++], 1);
                argv[w][0] = 127;
                write(1, "\n", 1);
        }
}