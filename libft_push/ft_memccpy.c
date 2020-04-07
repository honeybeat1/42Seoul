#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char *)src;
    d = (unsigned char *)dst;
    while (n--)
    {
        if (*s == c)
        {
            *d++ = c;
            return (d);
        }
        *d++ = *s++;
    }
    return (0);
}