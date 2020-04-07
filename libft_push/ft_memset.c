#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *char_ptr;

    char_ptr = (unsigned char *)s;
    while (n-- > 0)
        *char_ptr++ = c;
    return (s);
}