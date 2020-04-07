/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 19:56:37 by dachung           #+#    #+#             */
/*   Updated: 2020/03/16 16:28:28 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    int length;
    char *cpy;
    int i;

    length = ft_strlen(s1);
    cpy = (char *)malloc(sizeof(char) * (length + 1));
    i = 0;
    while (length-- > 0)
    {
        cpy[i] = s1[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}