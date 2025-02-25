#include <unistd.h>

int     main(int argc, char **argv)
{
        argc = 0;
        while (argv[0][argc])
        {
                write(1, &argv[0][argc], 1);
                argc++;
        }
        write(1, "\n", 1);
}