/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 23:53:49 by dachung           #+#    #+#             */
/*   Updated: 2020/03/24 21:48:28 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char *temp;

    temp = (char *)s;
    while (*temp > 0)
        if (*temp++ == c)
            return (temp - 1);
    if (c == '\0')
        return (temp);
    else
        return (NULL);
}

