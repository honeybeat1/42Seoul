/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 19:23:26 by dachung           #+#    #+#             */
/*   Updated: 2020/03/05 19:52:56 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}