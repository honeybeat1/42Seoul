/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 18:11:39 by dachung           #+#    #+#             */
/*   Updated: 2020/03/15 02:17:25 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *tmp;

    tmp = (unsigned char *)s;
    while (n-- > 0)
    {
        //printf("%zu, %d\n", n, *tmp); 
        if (*tmp == (unsigned char) c)
            return (tmp);
        tmp++;
    }
    return (NULL);
}
/*
int     main(void)
{
	int tab[7] = {17, -8, -2, -1, 0, -2, 2};
    int c = -1;
    printf("%d\n", (unsigned char)c);
	printf("%s", ft_memchr(tab, -1, 7));
}
*/
