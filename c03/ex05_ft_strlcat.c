int     ft_strlen(char *str)
{
        int     v;

        v = 0;
        while (str[v])
                v++;
        return (v);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
        unsigned int    f;
        unsigned int    e;
        unsigned int    i;
        unsigned int    w;

        f = 0;
        e = 0;
        while (dest[e])
                e++;
        i = e;
        w = ft_strlen(src);
        if (size == 0 || size <= i)
                return (w + size);
        while (src[f] && f < size - i -1)
        {
                dest[e] = src[f];
                e++;
                f++;
        }
        dest[e] = '\0';
        return (i + w);
}