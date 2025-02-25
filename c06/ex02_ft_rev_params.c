#include <unistd.h>

int     main(int argc, char **argv)
{
        int     v;

        argc -= 1;
        while (argc > 0)
        {
                v = 0;
                while (argv[argc][v])
                {
                        write(1, &argv[argc][v], 1);
                        v++;
                }
                write(1, "\n", 1);
                argc--;
        }
}