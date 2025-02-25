#include <unistd.h>

int     main(int argc, char **argv)
{
        int     v;
        int     g;

        g = 1;
        while (g < argc)
        {
                v = 0;
                while (argv[g][v])
                {
                        write(1, &argv[g][v], 1);
                        v++;
                }
                write(1, "\n", 1);
                g++;
        }
}