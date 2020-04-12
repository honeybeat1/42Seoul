/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:46:18 by dachung           #+#    #+#             */
/*   Updated: 2020/04/07 19:37:24 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t i, size_t j)
{
	if (i > j)
		return (j);
	else
		return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize != 0 && (dstsize > dst_len + 1) && (src_len != 0))
	{
		while (dstsize - dst_len - 1 > i)
		{
			dst[dst_len + i] = src[i];
			i++;
			if (src[i] == '\0')
				break ;
		}
		dst[dst_len + i] = '\0';
	}
	return (src_len + ft_min(dst_len, dstsize));
}
