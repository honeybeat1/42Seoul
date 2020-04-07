/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 15:56:43 by dachung           #+#    #+#             */
/*   Updated: 2020/03/24 17:19:42 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    int     i;

    if(!(sub = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while (len-- > 0 && s[start] != 0)
    {
        sub[i++] = s[start++];
    }
    sub[i] = '\0';
    return (sub);
}