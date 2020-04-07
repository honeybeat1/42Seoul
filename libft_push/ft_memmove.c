/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 17:09:10 by dachung           #+#    #+#             */
/*   Updated: 2020/04/05 17:17:34 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	s = (unsigned char *)malloc(sizeof(char) * (len));
	ft_memcpy(s, src, len);
	d = (unsigned char *)dst;
	ft_memcpy(d, s, len);
	return (d);
}